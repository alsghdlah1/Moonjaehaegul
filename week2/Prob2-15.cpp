#include<stdio.h>
int main(void)
{
	int i, n, start;

	printf("�� ���� �Է��ض�: \n");
	scanf("%d", &n);
	printf("�� ���� ���۳�¥�� ���� �� �ų�?:(1=Sun, 7=Sat): \n");//1���� �Ͽ���,2�� �����Ϻ��� ������.
	scanf("%d", &start);

	for (i = 1; i < start; i++)
	{
		printf("   ");
	}
	for (i = 1; i <= n; i++)
	{
		printf("%3d", i);
		if ((start + i - 1) % 7 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}