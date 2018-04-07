#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int n, count = 0;
	int temp = 0;
	int number = 0; //나머지
	int arr[10] = { 0 };

	scanf("%d", &n);
	temp = n;
	while (1) //몇 번 돌릴건지 계산.
	{
		n /= 10; 
		count++;
		if (n < 10)
			break;
	}
	for (int i = 0; i < count+1; i++)
	{
		number = temp % 10;
		temp /= 10;
		switch (number)
		{
		case 0:
			arr[0]++;
			break;
		case 1:
			arr[1]++;
			break;
		case 2:
			arr[2]++;
			break;
		case 3:
			arr[3]++;
			break;
		case 4:
			arr[4]++;
			break;
		case 5:
			arr[5]++;
			break;
		case 6:
			arr[6]++;
			break;
		case 7:
			arr[7]++;
			break;
		case 8:
			arr[8]++;
			break;
		case 9:
			arr[9]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d는 %d번 출력\n", i, arr[i]);
}