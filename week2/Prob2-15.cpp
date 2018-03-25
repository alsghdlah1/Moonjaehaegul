#include<stdio.h>
int main(void)
{
	int i, n, start;

	printf("일 수를 입력해라: \n");
	scanf("%d", &n);
	printf("그 주의 시작날짜는 뭘로 할 거냐?:(1=Sun, 7=Sat): \n");//1일은 일요일,2는 월요일부터 시작함.
	scanf("%d", &start);

	for (i = 1; i < start; i++)
	{
		printf("   ");
	}
	for (i = 1; i <= n; i++)
	{
		printf("%3d", i);
		if ((start + i - 1) % 7 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}