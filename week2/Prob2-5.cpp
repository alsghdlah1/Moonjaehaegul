#include<stdio.h>
void main()
{
	int max = 0;
	int min = 0;
	int n = 0; //������ �����ϱ� ���� ����
	int k = 0; //ī���� ���� ���� ��.
	int temp = 0;

	printf("10���� ������ �Է��ϼ���\n");
	do {
		scanf("%d", &n);
		k++;
	} while (k <1);
	
	min = n;
	max = n; //ó���� ���� ���� �ִ밪�̸鼭 �ּҰ��� �Ǳ� ������.
	printf("�ִ밪�� �ּҰ��� ���̴� %d�Դϴ�.\n", (max - min));

	for (int i = 0; i < 10 - k; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
		}
		else if (n < min)
			min = n;
		else
			n = n;
		printf("�ִ밪�� �ּҰ��� ���̴� %d�Դϴ�.\n", (max - min));
	}
}