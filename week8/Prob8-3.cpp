#pragma warning(disable:4996)
#define MAX 150
#include<stdio.h>
int main()
{
	int data[MAX][MAX] = { 0 };
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				data[i][j] = 1;
			else
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
		}
	}
	printf("%d", data[n][k]);
	return 0;
}