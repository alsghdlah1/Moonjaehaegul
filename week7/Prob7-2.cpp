#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d", &n);
	int data[30] = { 0 };

	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i+1; j < n - 1; j++)
		{
			if (data[i] > data[j])
			{
				for (int k = j + 1; k < n; k++)
				{
					if (data[j] > data[k])
						count++;
				}
			}
		}
	}
	printf("%d", count);
}