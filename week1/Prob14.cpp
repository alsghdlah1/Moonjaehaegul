#include<stdio.h>
void main()
{
	/*
	//1��° ���
	int sign = 1; //��ȣ ����
	double factorial = 1; //���丮��
	double x = 1; //x �ʱ� ������
	double radian; //�Է��޴� ��
	double sin = 0; //�����Ǵ� ��
	double cos = 0; //�����Ǵ� ��
	printf("x�� ���� �Է����ּ���.������ radian�Դϴ�.\n");

	for (int i = 1; i <= 100; i++)
	{
		cos += sign *(x / factorial);
		x *= radian;
		factorial *= (2 * i - 1); // sin�� �и�� Ȧ�� ���丮���̱� ������

		sin += sign * (x / factorial);
		sign *= (-1); //���� ���� (-)�̱� ������
		x *= radian;
		factorial *= (2 * (i + 1) - 2);
	}
	printf("%lf  %lf", sin, cos);
	*/

	//2��° ���
	/*
	double fact_odd = 1; //sinx�� ���丮��(�и�)
	double fact_even = 1; //cosx�� ���丮��(�и�)
	double complement1 = 1; //Ȧ�� ����
	double complement2 = 1; //¦�� ����
	double radian; //�Է¹޴� ��
	double sin = 0; //sin �����
	double cos = 0; //cos �����
	int sign = 1; //����
	double sinx = 0; //sinx�� ���ڴ���
	double cosx = 0; //cosx�� ���ڴ���

	printf("x�� ���� �Է����ּ���.\n");
	scanf("%lf", &radian);

	for (int i = 1; i <= 100; i++)
	{
		complement2 = fact_odd;
		fact_odd *= (2 * i - 1);
		complement1 = (fact_odd * fact_even); 
		sin += (sinx * sign) / complement1; //fact_odd;
		sinx *= ((radian)*(radian)); //sin�� ���ڰ� ����.
		cos += cosx * sign / (complement2 * fact_even); //fact_even;
		fact_even *= (2 * (i + 1) - 2);
		cosx *= (radian*radian);

		sign *= (-1);
	}
	printf("%lf %lf", sin, cos);
	*/

	//3��° ��� (2��°�� ������ ����. �ڵ带 ����ȭ ��Ű�� ����ȭ��Ų��)
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