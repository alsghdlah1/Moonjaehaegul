#include<stdio.h>
int main(void)
{
	int N;
	int v = 1;
	scanf("%d", &N);
	//���⿡�� N���� �۰ų� �����鼭 ���� ū 2�� �ŵ������� v�� ���Ѵ�.
	while (v *2 <= N) //2�� �������� ������, �۰ų� ���� ���� �ƴ϶�, ū ���� �Ǿ����.
		v *= 2;

	while (v > 0)
	{
		if (N >= v)
		{
			N = N - v;
			printf("1");
		}
		else
			printf("0");

		v = v / 2;
	}
	return 0;
}