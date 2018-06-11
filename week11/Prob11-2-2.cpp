#pragma warning(disable:4996)
#include<stdio.h>
#define MAX 100
int check(double gauss[MAX][MAX], double sol[MAX], int n);
int main()
{
	int n, idx = 0, idy = 0;
	double gauss[MAX][MAX];
	double sol[MAX];
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
	if (check(gauss, sol, n))
	{
		for (int i = 0; i < n; i++)
			printf("x%d = %.lf\n", i + 1, sol[i]);
	}
	fclose(fp);
	return 0;
}

int check(double gauss[MAX][MAX], double sol[MAX], int n)
{
	double mul = 1;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		mul = gauss[i][i];
		if (mul == 0)
		{
			for (int k = 0; k <= n; k++)
			{
				if (k == n)
				{
					if (sol[i] == 0)
						printf("Infinite Solution\n");
					else
						printf("No Solution\n");
					return 0;
				}
				if (gauss[i][k] != 0)
					break;
			}
			printf("Swap\n");
			int j = i + 1;
			double temp;
			while (gauss[i][i] == 0 && j <= n)
			{
				if (j == n)
				{
					printf("No Solution\n");
					return 0;
				}
				for (int k = 0; k < n; k++)
				{
					temp = gauss[j][k];
					gauss[j][k] = gauss[i][k];
					gauss[i][k] = temp;
				}
				temp = sol[j];
				sol[j] = sol[i];
				sol[i] = temp;
				j++;
			}
			mul = gauss[i][i];
		}
		for (int k = 0; k < n; k++)
			gauss[i][k] /= mul;
		sol[i] /= mul;

		for (int j = i + 1; j < n; j++)
		{
			mul = gauss[j][i];
			for (int k = i; k < n; k++)
			{
				gauss[j][k] -= gauss[i][k] * mul;
			}
			sol[j] -= sol[i] * mul;
		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			sol[j] -= sol[i] * gauss[j][i];
			gauss[j][i] = 0;
		}
	}
	return 1;
}