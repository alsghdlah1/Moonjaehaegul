#include<stdio.h>
void main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);

	while (n != 0)
	{
		m = (10 * m) + (n % 10);
		n = n / 10;
	}
	printf("%d", m);
}
/*
void main()
{
	int num;
	scanf("%d", &num);
	while(num>0)
	{
		printf("%d",num%10);
		num = num/10;
	}
}*/