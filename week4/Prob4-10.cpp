#include<stdio.h>
/*7���� ��찡 �ִµ�, ���������� 
��ġ�� ������ ���� ����, ���� �� �簢���� ���� �� �߿��� �� �����ʿ� �ִ� ��
������ ����, ���� �� �簢���� ������ �� �߿��� �� ���ʿ� �ִ� ��
���� ����, ���� �� �簢���� ���� �� �߿��� �� �Ʒ��ʿ� �ִ� ��
�Ʒ��� ����, ���� �� �簢���� �Ʒ��� �� �߿��� �� ���ʿ� �ִ� ��
���� �� x�� ���� �� �簢���� x�߿��� ū ��.
������ �� width�� ���� �� �簢���� x+width�߿��� ���� �� -x��ǥ
(���� ��) y�� ���� �� �簢���� y�߿��� ū ��
(�Ʒ��� ��)height�� ���� �� �簢���� y+height�߿��� ���� �� -y��ǥ
*/

void main()
{
	int x1, y1, x2, y2 = 0; //ù ��° ���簢��
	int x3, y3, x4, y4 = 0; //�� ��° ���簢��
	int small_x1 = 0, small_y1 = 0; 
	int small_x2 = 0, small_y2 = 0;
	int big_x1 = 0, big_y1 = 0;
	int big_x2 = 0, big_y2 = 0;
	int square_x1 = 0, square_y1 = 0 ,square_x2=0, square_y2=0;
	int width = 0, height = 0; //��ġ�� ������ ���簢�� ����,����

	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if (x1 > x2)
	{
		small_x1 = x2;
		big_x1 = x1;
	}
	else
	{
		small_x1 = x1;
		big_x1 = x2;
	}
	if (y1 > y2)
	{
		small_y1 = y2;
		big_y1 = y1;
	}
	else
	{
		small_y1 = y1;
		big_y1 = y2;
	}
	if (x3 > x4)
	{
		small_x2 = x4;
		big_x2 = x3;
	}
	else
	{
		small_x2 = x3;
		big_x2 = x4;
	}
	if (y3 > y4)
	{
		small_y2 = y4;
		big_y2 = y3;
	}
	else
	{
		small_y2 = y3;
		big_y2 = y4;
	}
	if (small_x1 > small_x2)
		square_x1 = small_x1;
	else
		square_x1 = small_x2;

	if (big_x1 > big_x2)
		square_x2 = big_x2;
	else
		square_x2 = big_x1;

	if (square_x1 > square_x2)
	{
		width = 0;
		printf("��ġ�� �ʽ��ϴ�.\n");
	}
	else
		width = square_x2 - square_x1;

	if (small_y1 > small_y2)
		square_y1 = small_y1;
	else
		square_y1 = small_y2;
	
	if (big_y1 > big_y2)
		square_y2 = big_y2;
	else
		square_y2 = big_y1;

	if (square_y1 > square_y2)
	{
		height = 0;
		printf("��ġ�� �ʽ��ϴ�.\n");
	}
	else
		height = square_y2 - square_y1;

	printf("%d\n", width * height);
}