#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int tmp = 0;
	int i = 0;
	int arr[100] = { 0 };
	int max = 0, min = 0; //max일 때 팔고, min일 때 산다.
	int diff = 0;
	FILE *fp = fopen("input10.txt", "r");
	while (fscanf(fp, "%d", &tmp) != EOF)
	{
		arr[i++] = tmp;
		min = arr[0];
		max = arr[0];
	}
	fclose(fp);
	for (int k = 0; k < i; k++)
	{
		if (min > arr[k])
			min = arr[k];
		else if (max < arr[k])
			max = arr[k];
		if (arr[k + 1] < max)
		{
			diff += max - min;
			max = 0, min = arr[k];
		}
	}
	printf("The Best Profit is %d\n", diff);
}