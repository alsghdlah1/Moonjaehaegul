#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int data[100][100] = { 0 };
	int n;
	int rowsum[100] = { 0 };
	double rowSd[100] = { 0.0 };
	int colsum[100] = { 0 };
	double colSd[100] = { 0.0 };

	FILE *fp =fopen("input4.txt", "r");
	fscanf(fp, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			fscanf(fp, "%d", &data[i][j]);
	}
	fclose(fp);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rowsum[i] += data[i][j];
			colsum[j] += data[i][j];
		}
	}

	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rowSd[i] += (data[i][j] - (double)rowsum[i] / n)*(data[i][j] - (double)rowsum[i] / n);
			colSd[j] += (data[i][j] - (double)colsum[j] / n)*(data[i][j] - (double)colsum[j] / n);
			//square = (data[i][j] - avg)*(data[i][j] - avg);
			//sd += (double)(square) / n;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", data[i][j]);
		} //한 행당 숫자와 평균, 표준편차가 다 나와야함.
		printf("%lf %lf\n", (double)rowsum[i] / n, sqrt(rowSd[i] / n));
	}
	//열은 평균 줄 나오고, 그 다음 줄에 표준편차가 나옴.
	for (int j = 0; j < n; j++)
		printf("%lf ", (double)colsum[j] / n); //열의 평균
	printf("\n");
	for (int j = 0; j < n; j++) //열의 표준편차
		printf("%lf ", sqrt(colSd[j] / n));
	printf("%\n");
	return 0;
}