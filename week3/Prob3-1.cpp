#include<stdio.h>
void main()
{
	unsigned int n = 0;
	int oddsum = 0;
	int evensum = 0;
	int k = 0;
	printf("�ڿ����� �Է��ϼ���.\n");

	while (1)
	{
		scanf("%d", &n);
		k++;
		if (n % 2 == 0)
		{
			evensum = evensum + n;
		}
		else
			oddsum = oddsum + n;

		if (evensum == oddsum)
			break;
	}
	printf("%d", k);
}