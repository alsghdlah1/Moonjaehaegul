#include<stdio.h>
void main()
{
	int n = 0;   //�Է°�
	int sum = 0; //������
	printf("Input Number\n");

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		sum = sum + n;
		printf("%f\n", (float)sum/i);
	}
}