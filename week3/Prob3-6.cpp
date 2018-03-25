#include<stdio.h>
void main()
{
	double x = 0, y = 1;
	double avg = 0;
	double errorRange = 1;
	double newy = 0;
	printf("제곱근 할 숫자를 입력해라\n");
	scanf("%lf", &x);

	while (1)
	{
		newy = (y + x/y) / 2.0;
		errorRange = 0.00001 * newy;
		avg = y - newy;
		if (avg < 0) 
			avg = -avg;
		y = newy;
		if (avg <= errorRange)
			break;
	}
	printf("%lf  %lf  %lf\n", x, y, errorRange);
}