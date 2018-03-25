#include<stdio.h>
void main()
{
	/*
	int x1, y1 = 0;
	int x2, y2 = 0;
	int x3, y3 = 0;

	printf("3개의 점을 입력\n");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

	if (x1 == x2)
	{
		if (y2 == y3) //우회전, 좌회전 처리
		{
			if (x3 > x2)
				printf("Right\n");
			else {
				if (x2 > x3)
					printf("Left\n");
			}
		}
		else if (x2 == x3 && y2 > y3) //직진 처리
			printf("Straight\n");
		else 
		{
			if (x2 == x3 && y3 > y2)
			printf("U-Turn\n");
		}

	}

	else if (y1 == y2)
	{
		if (x2 == x3)
		{
			if (y3 > y2)
				printf("Left\n");
			else {
				if (y2 > y3)
					printf("Right\n");
			}
		}
		else if (y2 == y3 && x3 > x2) //직진처리
			printf("U-Turn\n");
		else if (y2 == y3 && x2 > x3)
			printf("Straight\n");
		else
			printf("Input Error\n");
	}
	else
		printf("Input Error\n");
*/
	int x1, y1 = 0;
	int x2, y2 = 0;
	int down = -1;
	int up = -1;
	int left = -1;
	int right = -1;

	printf("Input Number\n");
	scanf("%d %d", &x1, &y1);

	for (int i = 1; i <= 2; i++)
	{
		scanf("%d %d", &x2, &y2);
		if (x1 != x2 && y1 != y2)
		{
			printf("Input Error\n");
			return;
		}
		if (x1 == x2) {
			if (y1 > y2)
				down += i;
			else
				up += i;
		}
		else if (y1 == y2)
		{
			if (x1 > x2)
				left += i;
			else
				right += i;
		}
		x1 = x2;
		y1 = y2;
	}
	if (up == 2 || down == 2 || right == 2 || left == 2)
		printf("Straight\n");
	else if (up == 0 && right == 1 || down == 0 && left == 1 || right == 0 && down == 1 || left == 0 && up == 1)
		printf("Right");
	else if (up == 0 && left == 1 || down == 0 && right == 1 || left == 0 && down == 1 || right == 0 && up == 1)
		printf("Left");
	else
		printf("U-turn");
}