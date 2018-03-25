#include<stdio.h>
void main()
{
	/*
	//1번째 방법
	int sign = 1; //부호 변경
	double factorial = 1; //팩토리얼
	double x = 1; //x 초기 고정값
	double radian; //입려받는 값
	double sin = 0; //누적되는 값
	double cos = 0; //누적되는 값
	printf("x의 값을 입력해주세요.단위는 radian입니다.\n");

	for (int i = 1; i <= 100; i++)
	{
		cos += sign *(x / factorial);
		x *= radian;
		factorial *= (2 * i - 1); // sin의 분모는 홀수 팩토리얼이기 때문에

		sin += sign * (x / factorial);
		sign *= (-1); //다음 항은 (-)이기 때문에
		x *= radian;
		factorial *= (2 * (i + 1) - 2);
	}
	printf("%lf  %lf", sin, cos);
	*/

	//2번째 방법
	/*
	double fact_odd = 1; //sinx의 팩토리얼(분모)
	double fact_even = 1; //cosx의 팩토리얼(분모)
	double complement1 = 1; //홀수 보충
	double complement2 = 1; //짝수 보충
	double radian; //입력받는 값
	double sin = 0; //sin 결과값
	double cos = 0; //cos 결과값
	int sign = 1; //반전
	double sinx = 0; //sinx의 분자누승
	double cosx = 0; //cosx의 분자누승

	printf("x의 값을 입력해주세요.\n");
	scanf("%lf", &radian);

	for (int i = 1; i <= 100; i++)
	{
		complement2 = fact_odd;
		fact_odd *= (2 * i - 1);
		complement1 = (fact_odd * fact_even); 
		sin += (sinx * sign) / complement1; //fact_odd;
		sinx *= ((radian)*(radian)); //sin의 분자값 구함.
		cos += cosx * sign / (complement2 * fact_even); //fact_even;
		fact_even *= (2 * (i + 1) - 2);
		cosx *= (radian*radian);

		sign *= (-1);
	}
	printf("%lf %lf", sin, cos);
	*/

	//3번째 방법 (2번째와 원리는 같음. 코드를 간결화 시키고 최적화시킨것)
	double result1 = 0.0;
	double result2 = 0.0;
	double x;
	scanf("%lf", &x);
	double num1 = x, num2 = 1.0;
	int sign = 1;

	for (int i = 1; i <= 100; i++)
	{
		result1 += sign*num1;
		result2 += sign*num2;

		num1 *= x*x / (2.0 *i) / (2.0*i + 1);
		num2 *= x*x / (2.0*i - 1) / (2.0*i);

		sign = -sign;
	}
	printf("%lf %lf\n", result1, result2);
}