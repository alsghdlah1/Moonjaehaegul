#include<stdio.h>
void main()
{
	int cx1 = 0;
	int cy1 = 0;
	int cr1 = 0;
	int cx2 = 0;
	int cy2 = 0;
	int cr2 = 0;
	int d = 0; //�� ���� ������ �Ÿ� ����

	printf("�� ���� ������ ��ǥ�� �������� �Է����ּ���\n");
	scanf("%d %d %d", &cx1, &cy1, &cr1);
	scanf("%d %d %d", &cx2, &cy2, &cr2);

	d = (cx2 - cx1)*(cx2 - cx1) + (cy2 - cy1) * (cy2 - cy1);
	
	if ((cr2 - cr1)* (cr2 - cr1) <= d && d <= (cr2 + cr1)*(cr2 + cr1))
		printf("Yes");
	else
		printf("No");
}