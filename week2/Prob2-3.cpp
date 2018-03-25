#include<stdio.h>
//짝수들만의 합과 홀수들만의 합을 구한뒤, 절대값을 구하는 프로그램
void main()
{
	int odd = 0;
	int even = 0;
	int result = 0;
	int n = 0;

	printf("Input 10 Number\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			even = n + even;
		}
		else {
			odd = n + odd;
		} 
	}
	result = odd - even;
	if (result > 0)
		printf("%d", result);
	else
		printf("%d", (-1)*result);
}