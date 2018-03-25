#include<stdio.h>
void main()
{
	int x = 0, y = 0;
	int gcd = 0;

	scanf("%d %d", &x, &y);
	if (x < y) //크거나 같은 쪽을 x라 했으므로 작은 경우만 생각하면 됨.
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	while (x%y != 0) //x%y == 0이면 gcd이므로.
	{
		x = x%y;
		int tmp = x;
		x = y;
		y = tmp;
	}
	printf("GCD는 %d", y);
}