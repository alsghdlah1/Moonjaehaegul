#include<stdio.h>
void main()
{
	int n = 0;   //입력값
	int sum = 0; //누적값
	printf("Input Number\n");

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		sum = sum + n;
		printf("%f\n", (float)sum/i);
	}
}