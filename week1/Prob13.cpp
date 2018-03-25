#include<stdio.h>
void main()
{
	double lastmoney = 0; //월말 돈
	double money = 0;     //입력 값
	double ratio = 0;   //이자율

	printf("이자율을 입력하세요.\n 얼마를 넣으실건가요? 양수는 입금, 음수는 출금임돠\n");
	scanf("%lf", &ratio);

	for (int month = 1; month <= 12; month++)
	{
		scanf("%lf", &money);
		lastmoney += money;
		lastmoney = lastmoney *(1 + ratio);
		/*
		lastmoney += money * (1 + ratio); // 이 방법대로 하면, 전체금액이 아니라 들어온 금액에 대해서만 계산하게됨.
		*/
		printf("%lf\n", lastmoney);
	}
}