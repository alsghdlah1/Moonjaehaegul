#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n = 0,total=0;
	int T = 1000;
	scanf("%d", &n);

	for ( T = 0; T < 1000; T++)
	{
		int x = 0, y = 0;
		int count = 0;
		while (x > -n && x < n && y > -n && y < n)
		{
			int random = rand() % 4;
			switch (random)
			{
				case 0: x++; break;
				case 1: x--; break;
				case 2: y++; break;
				case 3: y--; break;		
			}
			count++;
		}
		total += count;
	}
	printf("%d\n", total / T);
}