#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i=0, T = 1000000;
	int count1 = 0, count2 = 0;
	
	for (int i = 0; i < T; i++)
	{
		int case1 = 0; //6�� ������ 1�� ������ ���.
		for (int k = 0; k < 6; k++)
		{
			int random = rand() % 6 + 1; //�ֻ����� 1~6�����̹Ƿ�
			if (random == 1)
			{
				case1++;
				break; //�ѹ��̶� 1�� ������ �ߴ�.
			}
		}
		if (case1 == 1)
			count1++;

		int case2 = 0;
		for (int k = 0; k < 12; k++)
		{
			int random = rand() % 6 + 1;
			if (random == 1)
				case2++;//��� 2�� 1�� ���;� �ϹǷ�, break ����.
		}
			if (case2 >= 2)
				count2++;
		}
	printf("%lf %lf\n", (double)count1/T, (double)count2/T);
}