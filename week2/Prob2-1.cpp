#include<stdio.h>

int main()
{
	int n0 = 0;
	int n1 = 0;
	int n2 = 0;

	printf("Input 3 Number\n");
	scanf("%d %d %d", &n0, &n1, &n2);

	if (n0 < n1 + n2 && n1 < n0 + n2 && n2 < n0 + n1)
	{
		printf("Yes\n");
	}
	else
		printf("No\n");
	
	return 0;
}