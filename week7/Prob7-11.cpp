#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n, count = 0, maxCount = 0;
	int data[15] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (int i = 0; i < n; i++)
	{
		if (data[i] == 0)
		{
			data[i] = 1;
			for (int k = 0; k < n; k++)
			{
				if (data[k] == 1)
				{
					count++;
				}
				else
				{
					if (count > maxCount)
					{
						maxCount = count;
					}
					count = 0;
				}
			}
			data[i] = 0;
		}
		else
		{
			continue;
		}
	}
	printf("%d", count);
	return 0;
}