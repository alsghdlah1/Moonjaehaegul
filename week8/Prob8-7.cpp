#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int total = 0;
	int tank[20] = { 0 };
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &tank[i]);
	int left_max = 0, right_max = 0; //°¡Àå Å« ±âµÕ.
	int low = 0, high = n - 1; //¿ÞÂÊ ÀÎµ¦½º, ¿À¸¥ÂÊ ÀÎµ¦½º.

	while (low <= high)
	{
		if (tank[low] < tank[high])
		{
			if (tank[low] > left_max)
				left_max = tank[low];
			else
				total += left_max - tank[low];
			low++;
		}
		else
		{
			if (tank[high] > right_max)
				right_max = tank[high];
			else
				total += right_max - tank[high];
			high--;
		}
	}
		printf("%d", total);
		return 0;
}
/*
int main()
{
	int n;
	int sum = 0, min;
	int tank[20] = { 0 };
	int left[20] = { 0 };
	int right[20] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &tank[i]);

	left[0] = tank[0];
	for (int i = 1; i < n; i++)
		left[i] = (left[i-1] > tank[i]) ? left[i-1] : tank[i];
	
	right[n - 1] = tank[n - 1];
	for (int i = n - 2; i >= 0; i--)
		right[i] = (right[i + 1] > tank[i]) ? right[i + 1] : tank[i];

	for (int i = 0; i < n; i++)
	{
		min = (left[i] < right[i]) ? left[i] : right[i];
		sum += min - tank[i];
	}
		printf("%d", sum);
		return 0;
}
*/