#pragma warning(disable:4996)
#include<stdio.h>
/*
int intersect() // 두 선분이 교차하는지 검사하는 함수
{

}
*/
int main()
{
	int data[100];
	int intersect_arr[100];
	int intersect_x[50], intersect_y[50];
	int x1,index=0;
	int n = 0;
	int index_x = 0, index_y=0;
	int horizon[100], vertical[100];
	int j = 0, k = 0;
	FILE *fp = fopen("input3.txt", "r");
	fscanf(fp, "%d", &x1);
	while (!feof(fp))
		fscanf(fp, "%d",&data[n++]);
	fclose(fp);

	for (int i = 0; i < n; )
	{
		if (data[i] < data[i + 2] && data[i + 1] == data[i + 3])
		{
			for (int h = j; h < j + 4; h++,i++)
			{
				horizon[h] = data[i];
			}
			j += 4;
		}
		else if (data[i] == data[i + 2] && data[i + 1] < data[i + 3])
		{
			for (int h = k; h < k + 4; h++,i++)
			{
				vertical[h] = data[i];
			}
			k += 4;
		}
	}

	for (int i = 0; i < j; i+=4)
	{
		for (int h = 0; h < k; h+=4)
		{
			if (vertical[h] >= horizon[i] && horizon[i+2] >= vertical[h] &&
				vertical[h + 1] <= horizon[i + 1] && vertical[h+3] >= horizon[i+1])
			{
				intersect_x[index_x++] = vertical[h];
				intersect_y[index_y++] = horizon[i + 1];
			}

		}
	}
	for (int i = 1; i < index_x; i++)
	{
		int j = i - 1;
		int tmpx = intersect_x[i];
		int tmpy = intersect_y[i];

		while (j >= 0 && (intersect_x[j] > tmpx || intersect_x[j] == tmpx && intersect_y[j] > tmpy))
		{
			intersect_x[j + 1] = intersect_x[j];
			intersect_y[j + 1] = intersect_y[j];
			j--;
		}
		intersect_x[j + 1] = tmpx;
		intersect_y[j + 1] = tmpy;
	}
	for (int i = 0; i < index_x; i++)
	{
		printf("%d %d", intersect_x[i], intersect_y[i]);
		printf("\n");
	}
	return 0;
}