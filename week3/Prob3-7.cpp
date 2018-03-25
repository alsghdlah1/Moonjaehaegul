#include<stdio.h>
void main()
{
	int n = 0;
	int i = 0;
	int count = 0; 
	int pre1 = 0, pre2 = 0; // pre2,pre1,n 
	printf("숫자들을 입력해라\n");

	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
		{
			if (pre1 <= pre2) //마지막 정수 처리하는 부분.
				count++;
			break;
		}
		if (i == 1 && pre1 <= n) //첫 번째 정수 처리하는 부분.
			count++;
		else if (i>1 && pre1 <= pre2 && pre1 <= n) //i>1을 안넣으면 i=0일 때 처리해버림. 이 부분은 2개 이상의 정수가 들어왔을 때.
			count++;

		pre2 = pre1;
		pre1 = n;	
		i++;
	}
	printf("%d\n", count);
}