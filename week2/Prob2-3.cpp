#include<stdio.h>
//¦���鸸�� �հ� Ȧ���鸸�� ���� ���ѵ�, ���밪�� ���ϴ� ���α׷�
void main()
{
	int odd = 0;
	int even = 0;
	int result = 0;
	int n = 0;

	printf("Input 10 Number\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			even = n + even;
		}
		else {
			odd = n + odd;
		} 
	}
	result = odd - even;
	if (result > 0)
		printf("%d", result);
	else
		printf("%d", (-1)*result);
}