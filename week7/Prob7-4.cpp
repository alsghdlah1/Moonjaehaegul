#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n, count=1, maxCount=1;
	int data[20] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (int i = 1; i < n; i++)
	{
		if (data[i - 1] <= data[i])
			count++;
		else if (data[i - 1] > data[i])
			count = 1;
		if (count > maxCount)
			maxCount = count;
	}
	printf("%d\n", maxCount);
}