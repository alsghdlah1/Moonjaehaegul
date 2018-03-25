#include<stdio.h>
void main()
{
	double F = 0;
	int C = 0;

	for (C = 0; C <= 100; C += 4)
	{
		F = C * 1.8 + 32;
		printf("%d %lf", C, F);
		printf("\n");
	}
}