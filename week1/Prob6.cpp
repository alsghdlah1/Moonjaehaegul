#include<stdio.h>

void main()
{
	int n = 0;
	int num = 1;
	float result = 1;
	printf("Input Number\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		num *= 2;
		result += (float)1 / num;
	}
	printf("The Result is %f\n", result);
}