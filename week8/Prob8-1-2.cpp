#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n, success = 0, T = 10000;
	int failcount = 0;
	scanf("%d", &n);
	int data[100][100]; //0은 갈 수 있는 곳, 1은 지나온 곳.
	srand((unsigned int)time(NULL));

	int left, right, down, up;
	for (int i = 0; i < T; i++)
	{ //계속 배열을 초기화시켜야한다.
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				data[i][j] = 0;
			}
		}
		int x = n / 2, y = n / 2;
		while (x != 0 && x < n - 1 && y != 0 && y < n - 1) //탈출 조건.
		{
			int aviable_check = 0;
			data[x][y] = 1;

			left = data[x][y - 1];
			right = data[x][y + 1];
			up = data[x - 1][y];
			down = data[x + 1][y];

			aviable_check = left + right + up + down;

			if (aviable_check >= 4)
			{
				failcount++;
				break;
			}

			int move = (rand() % 4)+1;
			switch (move)
			{
				case 1: 
				{
					if (left <= 0)
					{
						y = y - 1;
						break;
					}
				}
				case 2:
				{
					if (right <= 0)
					{
						y = y + 1;
						break;
					}
				}
				case 3:
				{
					if (up <= 0)
					{
						x = x - 1;
						break;
					}
				}
				case 4:
				{
					if (down <= 0)
					{
						x = x + 1;
						break;
					}
				}
			}					
		}
	}
	printf("%d\n", failcount);
	printf("%lf ", (double)(10000 - failcount) / T);
	return 0;
}