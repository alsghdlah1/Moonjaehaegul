#include<stdio.h>
void main()
{
	int k = 0;
	scanf("%d", &k);

	/*
	for(int sum=0; sum<=k; sum++)
	{
		for (int x = 0; x <= k; x++)
		{
			for (int y = 0; y <= k; y++)
			{
				if (x + y == sum)
					printf("%d %d\n", x, y);
			}
		}
	}
	*/
	for (int sum = 0; sum <= k; sum++)
	{
		for (int y = sum; y >=0; y--)
		{
			for (int x = 0; x <= sum; x++)
			{
				if (x + y == sum)
					printf("%d %d\n", x, y);
			}
		}
	}
}