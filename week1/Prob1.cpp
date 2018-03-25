#include<stdio.h>
void main()
{
	int a, b = 0;
	int result = 1;
	printf("Input Base and Exponent\n");
	scanf("%d %d", &a, &b);

	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	printf("The Result is %d\n", result);
}