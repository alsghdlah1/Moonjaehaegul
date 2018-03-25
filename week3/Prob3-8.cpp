#include<stdio.h>
void main()
{
	int income = 0;
	int afterincome = 0;
	int tax = 0;
	int bound1 = 12000000;
	int bound2 = 46000000;
	int bound3 = 88000000;
	int bound4 = 150000000;
	int bound5 = 500000000;

	printf("소득세를 입력\n");
	scanf("%d", &income);

	while (1)
	{
		if (income <= 0) break;
		if (income <= bound1)
		{
			tax += income * 0.06;
			income = 0;
		}
		else if (income <= bound2)
		{
			tax += (income -  bound1) * 0.15;
			income = bound1; //어차피 tax 계산할 때, 구간이기 때문에.
		}
		else if (income <= bound3)
		{
			tax += (income - bound2) * 0.24;
			income = bound2;
		}
		else if (income <= bound4)
		{
			tax += (income - bound3) * 0.35;
			income = bound3;
		}
		else if (income <= bound5)
		{
			tax += (income - bound4) * 0.38;
			income = bound4;
		}
		else
		{
			tax += (income - bound5) * 0.4;
			income = bound5;
		}
	}
	printf("%d\n", tax);
}