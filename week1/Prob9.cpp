#include<stdio.h>

void main()
{
	int boonmo = 1;
	int n = 0;
	int boonja = 4;
	double result = 0;
	int num = 1;
	printf("Input Number\n");
	scanf("%d", &n);

	for (int i = 1; i < 2 * n; i += 2)
	{
		result += ((double)boonja*num) / i;
		num *= (-1);
	}
	printf("The Result is %lf\n", result);
}