#include<stdio.h>
void main()
{
	int n = 0;
	printf("Input Number\n");
	scanf("%d", &n);

	for (int i = 2; i <= n; i *= 2)
	{
		printf("Hello  ");
	}
}