#include<stdio.h>
void main()
{
	int x = 0, y = 0;
	int gcd = 0;

	scanf("%d %d", &x, &y);
	if (x < y) //ũ�ų� ���� ���� x�� �����Ƿ� ���� ��츸 �����ϸ� ��.
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	while (x%y != 0) //x%y == 0�̸� gcd�̹Ƿ�.
	{
		x = x%y;
		int tmp = x;
		x = y;
		y = tmp;
	}
	printf("GCD�� %d", y);
}