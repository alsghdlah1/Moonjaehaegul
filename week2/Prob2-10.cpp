#include<stdio.h>
int main()
{
	int n = 0;
	int x1, y1 = 0;
	int x2, y2 = 0;
	int temp = 0;
	bool sign = true;
	int lenth = 0;

	printf("점의 개수를 입력해주세요\n");
	scanf("%d", &n);
	printf("점들을 입력해라\n");

	scanf("%d %d", &x1, &y1);
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d %d", &x2, &y2);
		if (x1 == x2) {
			temp = y2 - y1;
			if (temp < 0)
				lenth = lenth*(-1);
			lenth += temp;
		}
		else if (y1 == y2)
		{
			temp = x2 - x1;
			if (temp < 0)
				lenth = lenth*(-1);
			lenth += temp;
		}
		else {
			printf("Input Error\n");
			sign = false;
			break;
		}
		x1 = x2;
		y1 = y2;
	}
	if (sign)
		printf("The result is %d", lenth);
}