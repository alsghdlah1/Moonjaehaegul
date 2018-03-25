#include<stdio.h>
void main()
{
	int year1 = 0;
	int year2 = 0;
	int month1 = 0;
	int month2 = 0;
	int day1 = 0;
	int day2 = 0;

	printf("두 개의 날짜를 입력해주세요.\n");
	scanf("%d %d %d", &year1, &month1, &day1);
	scanf("%d %d %d", &year2, &month2, &day2);

	if (year1 < year2 || year1 == year2 && month1 < month2 || year1 == year2 && month1 == month2 && day1 < day2)
	{
		printf("-1");
	}
	else if (year1 == year2 && month1 == month2 && day1 == day2)
		printf("0");
	else
		printf("1");
}