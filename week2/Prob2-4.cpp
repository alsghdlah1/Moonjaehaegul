#include<stdio.h>
void main()
{
	int n;
	int k = 0;
	do {
		scanf("%d", &n);
		k++;
		} 
	while (n <0);
		int min = n;

		for (int i = 0; i<10 - k; i++)
		{
			scanf("%d", &n);
			if (n <0) continue;
			if (n < min)
				min = n;
		}

		printf("%d\n", min);
	}
	/*
	int n = 0;
	int min = 9999; //이 방법을 사용할시 9999이상이 들어오면 답이 없음...
	int i = 0;

	printf("Input 10 Integer\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d번째:", i);
		scanf("%d", &n);
		if (min > n && n>0)
		{
			min = n;
		}
	}
	printf("%d\n", min);
	*/

