#include<stdio.h>
void main()
{
	double lastmoney = 0; //���� ��
	double money = 0;     //�Է� ��
	double ratio = 0;   //������

	printf("�������� �Է��ϼ���.\n �󸶸� �����ǰǰ���? ����� �Ա�, ������ ����ӵ�\n");
	scanf("%lf", &ratio);

	for (int month = 1; month <= 12; month++)
	{
		scanf("%lf", &money);
		lastmoney += money;
		lastmoney = lastmoney *(1 + ratio);
		/*
		lastmoney += money * (1 + ratio); // �� ������ �ϸ�, ��ü�ݾ��� �ƴ϶� ���� �ݾ׿� ���ؼ��� ����ϰԵ�.
		*/
		printf("%lf\n", lastmoney);
	}
}