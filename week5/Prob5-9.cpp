#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int arr[100] = { 0 };
	int leader = -999999;
	int tmp = 0;
	int i = 0;

	FILE *fp = fopen("input9.txt", "r");
	while (fscanf(fp, "%d", &tmp) != EOF)
	{
		if (tmp >= leader)
		{
			leader = tmp;
			arr[i] = leader;
			i++;
		}
	}
	fclose(fp);
	printf("리더의 개수 : %d\n", i);
	for (int k = 0; k < i; k++)
	{
		printf("%d ", arr[k]);
	}
}