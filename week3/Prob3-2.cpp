#include<stdio.h>
int main(void)
{
	int N;
	int v = 1;
	scanf("%d", &N);
	//여기에서 N보다 작거나 같으면서 가장 큰 2의 거듭제곱수 v를 구한다.
	while (v *2 <= N) //2를 곱해주지 않으면, 작거나 같은 수가 아니라, 큰 수가 되어버림.
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