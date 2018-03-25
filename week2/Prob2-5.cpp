#include<stdio.h>
void main()
{
	int max = 0;
	int min = 0;
	int n = 0; //정수를 저장하기 위한 변수
	int k = 0; //카운팅 세기 위한 것.
	int temp = 0;

	printf("10개의 정수를 입력하세요\n");
	do {
		scanf("%d", &n);
		k++;
	} while (k <1);
	
	min = n;
	max = n; //처음에 들어온 값은 최대값이면서 최소값이 되기 때문에.
	printf("최대값과 최소값의 차이는 %d입니다.\n", (max - min));

	for (int i = 0; i < 10 - k; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
		}
		else if (n < min)
			min = n;
		else
			n = n;
		printf("최대값과 최소값의 차이는 %d입니다.\n", (max - min));
	}
}