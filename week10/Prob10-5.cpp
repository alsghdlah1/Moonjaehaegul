#pragma warning(disable:4996)
#include<stdio.h>
int readOperation(int* x1, int* y1, int* x2, int* y2, int* isVertical, int idx)
{
	int dir, move;
	scanf("%d %d", &dir, &move);
	if (dir == -1 && move == -1)
		return 0;
	else
	{
		if (idx == 0)
		{
			x1[idx] = 0;
			y1[idx] = 0;
			x2[idx] = 0;
			y2[idx] = 0;
		}
		else
		{ //그 다음 점이 어디로 갈지 모르기 때문에 x2,y2를 그대로 저장
			x1[idx] = x2[idx - 1];
			y1[idx] = y2[idx - 1];
			x2[idx] = x2[idx - 1];
			y2[idx] = y2[idx - 1];
		}
		switch (dir)
		{
		case 0:
		{
			y2[idx] = y1[idx] + move;
			break;
		}
		case 1:
		{
			x2[idx] = x1[idx] + move;
			break;
		}
		case 2:
		{
			y2[idx] = y1[idx] - move;
			break;
		}
		case 3:
		{
			x2[idx] = x1[idx] - move;
			break;
		}
		}

		if (x1[idx] == x2[idx])
			isVertical[idx] = 1;
		else
			isVertical[idx] = 0;

		return 1;
	}
}

int check(int* x1, int* y1, int* x2, int* y2, int* isVertical, int idx)
{
	if (idx == 0) return 1;
	int cr_x, cr_y, cr_x2, cr_y2;

	cr_x = x1[idx] <= x2[idx] ? x1[idx] : x2[idx];
	cr_y = y1[idx] <= y2[idx] ? y1[idx] : y2[idx];
	cr_x2 = x1[idx] >= x2[idx] ? x1[idx] : x2[idx];
	cr_y2 = y1[idx] >= y2[idx] ? y1[idx] : y2[idx];

	//check back trace // n-1부분 체크.(거꾸로 가는지 안가는지 체크함)
	if (isVertical[idx] && (y2[idx] - y1[idx])*(y2[idx - 1] - y1[idx - 1]) < 0)
		return 0;
	else if (!isVertical[idx] && (x2[idx] - x1[idx])*(x2[idx - 1] - x1[idx - 1]) < 0)
		return 0;

	int xi1, yi1, xi2, yi2;
	//detection intersection (이때까지의 궤적들을 기억)
	//  작은 점이 무조건 x1,y1이 되게한다. 출발점이 x1,y1이므로
	for (int i = 0; i < idx - 2; i++)
	{
		xi1 = x1[i] <= x2[i] ? x1[i] : x2[i];
		yi1 = y1[i] <= y2[i] ? y1[i] : y2[i];
		xi2 = x1[i] >= x2[i] ? x1[i] : x2[i];
		yi2 = y1[i] >= y2[i] ? y1[i] : y2[i];

		if (isVertical[idx] && !isVertical[i])
		{
			if (cr_x >= xi1 && cr_x <= xi2)
				if (cr_y <= yi1 && cr_y2 >= yi1)
					return 0;
		}
		else if (!isVertical[idx] && isVertical[i])
		{
			if (cr_x <= xi1 && cr_x2 >= xi1)
				if (cr_y >= yi1 && cr_y <= yi2)
					return 0;
		}
	}
	return 1;
}

int main()
{
	int x1[30] = { 0 }, x2[30] = { 0 }, y1[30] = { 0 }, y2[30] = { 0 };
	int isVertical[30] = { 0 };
	int idx1 = 0, idx2 = 0, idx = 0;

	while (readOperation(x1, y1, x2, y2, isVertical, idx))
	{
		if (check(x1, y1, x2, y2, isVertical, idx))
		{
			printf("%d %d\n", x2[idx], y2[idx]);
			idx++;
		}
		else
		{
			printf("invalid move\n");
		}
	}
	return 0;
}