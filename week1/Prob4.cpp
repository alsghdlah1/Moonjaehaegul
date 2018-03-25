#include<stdio.h>
void main()
{
	int n, n0, n1, n2, i;
	printf("Input Number\n");
	scanf("%d", &n);

	n1 = 1;
	n2 = 1;
	for (i = 1; i < n; ++i)
	{
		n0 = n2 + n1;
		n2 = n1;
		n1 = n0;
	}
	printf("%d", n0);
}