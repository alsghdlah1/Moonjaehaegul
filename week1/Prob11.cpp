#include<stdio.h>
void main()
{
	/*
	//1锅掳 规过.
	int n = 0;
	int result = 1;
	printf("Input Number\n");
	scanf("%d", &n);
	result = n;

	for (int i = 1; i<n && result>1;i*=2)
	{
		result /= 2;
		printf("%d  ", result);
	}
	*/

	//2锅掳 规过
	int n = 0;
	printf("Input Number\n");
	scanf("%d", &n);
	for (int i = 1; i <= 4 *(n+1); i *= 2)
	{
		printf("%d  ", n /= 2);
	}
}