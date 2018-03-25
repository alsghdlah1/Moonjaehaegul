#include<stdio.h>

void main()
{
	int n0 = 1;
	int n1 = 1;
	int n2 = 1;
	int num = 0;
	int temp = 0;
	
	printf("Input Number\n");
	scanf("%d", &num);

	for (int i = 3; i <= num; ++i)
	{
		temp = n0 + n1;
		n0 = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("The Result is %d\n", temp);
}