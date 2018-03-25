#include<stdio.h>
void main()
{
	int n;
	float result = 0;
	printf("Input Number\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += (float)1 / i;
	}
	printf("The Result is %f", result);
}