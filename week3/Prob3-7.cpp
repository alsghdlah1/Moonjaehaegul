#include<stdio.h>
void main()
{
	int n = 0;
	int i = 0;
	int count = 0; 
	int pre1 = 0, pre2 = 0; // pre2,pre1,n 
	printf("���ڵ��� �Է��ض�\n");

	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
		{
			if (pre1 <= pre2) //������ ���� ó���ϴ� �κ�.
				count++;
			break;
		}
		if (i == 1 && pre1 <= n) //ù ��° ���� ó���ϴ� �κ�.
			count++;
		else if (i>1 && pre1 <= pre2 && pre1 <= n) //i>1�� �ȳ����� i=0�� �� ó���ع���. �� �κ��� 2�� �̻��� ������ ������ ��.
			count++;

		pre2 = pre1;
		pre1 = n;	
		i++;
	}
	printf("%d\n", count);
}