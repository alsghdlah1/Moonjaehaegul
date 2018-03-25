#include<stdio.h>
void main()
{
	int x1, y1, x2, y2, x3, y3 = 0;
	int uturn = 0;
	int straight = 0;
	int left = 0;
	int right = 0;
	int n = 0;

	printf("몇 개의 점을 사용하겠습니까?\n");
	scanf("%d", &n);
	printf("Input Number\n");
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	if (x1 != x2 && y1 != y2)
	{
		printf("Input Error\n");
		return;
	}

	for (int i = 1; i < n - 1; i++)
	{
		scanf("%d %d", &x3, &y3);
		if (x2 != x3 && y2 != y3)
		{
			printf("Input Error\n");
			return;
		}
		if (x1 == x2)
		{
			if (y1 > y2)
			{
				if (x2 == x3)
				{
					if (y2 > y3)
						straight++;
					else // 유턴
						uturn++;
				}
				else //y2 == y3
				{
					if (x3 > x2)
						left++;
					else
						right++;
				}
			}
			else // y1 < y2
			{
				if (x2 == x3)
				{
					if (y3 > y2)
						straight++;
					else
						uturn++;
				}
				else //y2 == y3
				{
					if (x2 > x3)
						left++;
					else // 오른쪽
						right++;
				}
			}
		}
		else // y1 == y2
		{
			if (x2 > x1) //오른쪽으로 진행중
			{
				if (y3 == y2)
				{
					if (x3 > x2)
						straight++;
					else
						uturn++;
				}
				else
				{
					if (y3 > y2)
						left++;
					else
						right++;
				}

			}
			else // 왼쪽으로 진행.
			{
				if (y2 == y3)
				{
					if (x2 > x3)
						straight++;
					else
						uturn++;
				}
				else
				{
					if (y3 > y2)
						right++;
					else
						left++;
				}
			}
		}
	x1 = x2;
	y1 = y2;
	x2 = x3;
	y2 = y3;
}
	printf("%d %d %d %d", left, straight, right, uturn);
}
