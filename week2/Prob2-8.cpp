#include<stdio.h>
void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("������ �Է����ּ���\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a > b || c > d) {
		printf("Input Error\n");
	}
	if (b < c || d < a)
		printf("No\n");
	else
		printf("Yes\n");
}