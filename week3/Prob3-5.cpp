#include<stdio.h>
void main()
{
	int n = 0;
	int big1 = -99999; //���� ū ��
	int big2 = -99999; //2��°�� ���� ū ��
	printf("���ڵ��� �Է����ּ���\n");

	while (1) {
		scanf("%d", &n);
		if (n == -1)
			break;
		if (n > big1)
		{
			big2 = big1;
			big1 = n;
		}
		else if (n >= big2)
		{
			big2 = n;
		}
	}

	printf("%d %d\n", big1, big2);
}