#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n, T = 10000;
	scanf("%d", &n);
	int data[100][100]; //0 = posiible, 1 = imposiible
	//int move[4][2] = { { 0,-1 }, {1,0}, { 0,1 }, { -1,0 } }; //앞이 행번호 증감, 뒤가 열번호 증감.
	int move[][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } }; //앞이 행번호 증감, 뒤가 열번호 증감.
	int success = 0;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < T; i++)
	{
		int x = n / 2, y = n / 2;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				data[j][k] = 0;
		}
		bool flag = true;

		while (x !=0 && x<n-1 && y !=0 && y < n-1) //escape condition
		{
			int dir = -1;
			int possible_check = 0;
			data[x][y] = 1;

			for (int k = 0; k < 4; k++)
			{
				int next_x = x + move[k][0];
				int next_y = y + move[k][1];

				if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < n && data[next_x][next_y] == 0)
				{
					possible_check++;
					if (rand() % possible_check == 0)
						dir = k;
				}
			}
			if (dir == -1)
			{
				flag = false;
				break;
			}
			//move
			x += move[dir][0];
			y += move[dir][1];
		}
		if (flag)
			success++;
	}
	printf("%lf ", (double)success / T);	
	return 0;
}