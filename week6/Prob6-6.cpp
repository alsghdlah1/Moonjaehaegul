#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int data[100] = { 0 };
	int i = 0, n = 0, count = 0, tmp = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	while (1)
	{
		for (i = 0; i < n; i++)
		{
			if (data[i] != -1)
				break;
		}
		if (i == n)break;
		int start = i;
		int idx = i;
		while (1)
		{
			int t = idx;
			idx = data[idx];
			if (start == idx)
			{
				count++;
				data[t] = -1;
				break;
			}
			data[t] = -1;
		}
	}
	printf("%d", count);
}