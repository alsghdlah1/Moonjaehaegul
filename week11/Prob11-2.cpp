#pragma warning(disable:4996)
#include<stdio.h>
#define MAX 100

int check(double gauss[MAX][MAX], double sol[MAX], int n);
int main()
{
	double gauss[MAX][MAX];
	double sol[MAX];
	int n, idx = 0, idy = 0;
	FILE *fp = fopen("data.txt", "r");
	fscanf(fp, "%d", &n);
	while (!feof(fp))
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				fscanf(fp, "%lf", &gauss[i][j]);
			}
			fscanf(fp, "%lf", &sol[i]);
		}
	}
	fclose(fp);

	double mul = 1;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		mul = gauss[i][i];//이 부분에서 mul체크 해야됨.
		if (mul == 0)
		{
			if (check(gauss, sol, n) == 2)
			{
				printf("No Solution\n");
				return 0;
			}
			else if (check(gauss, sol, n) == 1)
			{
				printf("Infinite Solution\n");
				return 0;
			}
		}
		sol[i] /= mul;
		for (int k = 0; k < n; k++)
			gauss[i][k] /= mul;
		for (int j = i + 1; j < n; j++)
		{
			double scale = gauss[j][i];
			for (int k = i; k < n; k++)
			{
				gauss[j][k] = gauss[j][k] - (scale * gauss[i][k]);
			}
			sol[j] -= scale * sol[i];
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			double scale = gauss[j][i];
			for (int k = i; k >= 0; k--)
			{
				gauss[j][k] = gauss[j][k] - (scale * gauss[i][k]);
			}
			sol[j] -= scale * sol[i];
		}
	}
			for (int i = 0; i < n; i++) 
				printf("x%d = %.lf\n", i, sol[i]);
	return 0;
}
int check(double gauss[MAX][MAX], double sol[MAX], int n)
{//2는 해가 없음. 1는 해가 무한대, 0는 해가 있음.
	int idx = n - 1;
	if (gauss[idx][idx] == 0 && sol[idx] == 0)
		return 1;
	else if (gauss[idx][idx] == 0 && sol[idx] != 0)
		return 2;
	return 0;
}