#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i=0, T = 1000000;
	int count1 = 0, count2 = 0;
	
	for (int i = 0; i < T; i++)
	{
		int case1 = 0; //6번 던져서 1이 나오는 경우.
		for (int k = 0; k < 6; k++)
		{
			int random = rand() % 6 + 1; //주사위는 1~6까지이므로
			if (random == 1)
			{
				case1++;
				break; //한번이라도 1이 나오면 중단.
			}
		}
		if (case1 == 1)
			count1++;

		int case2 = 0;
		for (int k = 0; k < 12; k++)
		{
			int random = rand() % 6 + 1;
			if (random == 1)
				case2++;//적어도 2번 1이 나와야 하므로, break 안함.
		}
			if (case2 >= 2)
				count2++;
		}
	printf("%lf %lf\n", (double)count1/T, (double)count2/T);
}