#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int start[100] = { 0 };
	int end[100] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &start[i]);
		scanf("%d", &end[i]);
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (start[j] > start[j + 1] || start[j] == start[j + 1] && end[j] > end[j + 1])
			{
				int tmp = start[j];
				start[j] = start[j + 1];
				start[j + 1] = tmp;
				tmp = end[j];
				end[j] = end[j + 1];
				end[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i<n; i++)
		printf("%d %d\n", start[i], end[i]);
}