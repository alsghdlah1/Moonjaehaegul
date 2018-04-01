#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	int NUM = 0;
	int T = 1000;
	int val=0;
	int avg=0;
	int x = 0, y = 0;
	int count = 0;
	int sum = 0;
	printf("N을 입력하시오\n");
	scanf_s("%d", &NUM);

	srand((unsigned int)time(NULL));

	for (int i = 0; i < T; i++) {
		while (NUM > x && -NUM < y&&-NUM<x&&NUM>y)
		{
			val = rand() % 4;
			if (val == 1)
				x++;
			else if (val == 2)
				y++;
			else if (val == 3)
				x--;
			else if (val == 0)
				y--;
			count++;
		}
		sum = sum + count;
	}
		avg = sum / 1000;
		printf("%d %d %d", T, NUM, avg);
		return 0;
}