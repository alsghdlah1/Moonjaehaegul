#pragma warning(disable:4996)
#include<stdio.h>
int polynomial(int n)
{
	int x = 1, k = 0, h = 0, y = 0;
	int coef[5], expo[5], expo_result[5];

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &coef[k++], &expo[h++]);
	}
	scanf("%d", &x);
	//지수값 계산
	for (int i = 0; i < h ; i++)
	{
		int result = 1;
		for (int j = 0; j < expo[i]; j++)
			result *= x;

		if (expo[i] == 0)
		{
			expo_result[i] = 1;
			continue;
		}
		if (expo[i] == 1)
		{
			expo_result[i] = x;
			continue;
		}
		expo_result[i] = result;
	}
	for (int i = 0; i < k ; i++)
	{
		y += coef[i] * expo_result[i];
	}
	return y;
}

int main()
{
	int n, y;
	scanf("%d", &n);

	y = polynomial(n);
	printf("%d\n", y);
	return 0;
}