#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n;
	int data[100][100] = { 0 };
	FILE *fp = fopen("input6.txt", "r");
	fscanf(fp, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			fscanf(fp, "%d", &data[i][j]);
	}
	fclose(fp);

	for (int i = 0; i < n; i++)
	{
		int k = 0, j = 0;
		for (j = 0; j < n; j++)
			printf("%d ", data[i][j]);
		j--;
		for (i = i+1; i < n; i++)
			printf("%d ", data[i][j]);
		i--;
		//i = 3, j= 3;
		for (j = j - 1; j >=0; j--)
			printf("%d ", data[i][j]);
		j++;
		//i=3;j=0;
		for (i = i - 1; i > 0; i--)
			printf("%d ", data[i][j]);
		i++;
		//i=1,j=0;
		for (j = j + 1; j < n - 1; j++)
			printf("%d ", data[i][j]);
		j--;
		//i=1,j=2;
		for (i = i + 1; i < n - 1; i++)
			printf("%d ", data[i][j]);
		i--;
		//i=2,j=2;
		for (j = j - 1; j > 0; j--)
			printf("%d ", data[i][j]);
		break;
	}
}