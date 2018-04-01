#include<stdio.h>
void main()
{
	int n = 0;
	int temp = 0;
	printf("숫자를 입력\n");
	scanf("%d", &n);

	for (int y = 0; y <= n; y++)
	{
		for (int x = 0; x <= n; x++)
		{
			if (y % 2 == 0)
				printf("%d %d\n", x, y);

			else
				printf("%d %d\n", n - x, y);
		}
	}
}