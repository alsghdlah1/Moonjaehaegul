#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int n = 0, sum = 0;
	double avg = 0, square=0, sd = 0;
	int arr[100] = { 0 };
	printf("Input 'N'\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i]; 
	}
	avg = (double)sum / n; //(xi - x')^2 에서 x'

	for (int i = 0; i < n; i++)
	{
		square = (arr[i] - avg)*(arr[i] - avg);
		sd += (double)(square) / n;
	}
	sd = sqrt(sd);
	printf("평균 : %lf , 표준편차 : %lf\n" ,avg, sd);
}