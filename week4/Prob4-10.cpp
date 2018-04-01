#include<stdio.h>
/*7가지 경우가 있는데, 공통적으로 
겹치는 영역의 왼쪽 변은, 기존 두 사각형의 왼쪽 변 중에서 더 오른쪽에 있는 것
오른족 변은, 기존 두 사각형의 오른쪽 변 중에서 더 왼쪽에 있는 것
위쪽 변은, 기존 두 사각형의 위쪽 변 중에서 더 아래쪽에 있는 것
아래쪽 변은, 기존 두 사각형의 아래쪽 변 중에서 더 위쪽에 있는 것
왼쪽 변 x는 기존 두 사각형의 x중에서 큰 것.
오른쪽 변 width는 기존 두 사각형의 x+width중에서 작은 것 -x좌표
(위쪽 변) y는 기존 두 사각형의 y중에서 큰 것
(아래쪽 변)height는 기존 두 사각형의 y+height중에서 작은 것 -y좌표
*/

void main()
{
	int x1, y1, x2, y2 = 0; //첫 번째 직사각형
	int x3, y3, x4, y4 = 0; //두 번째 직사각형
	int small_x1 = 0, small_y1 = 0; 
	int small_x2 = 0, small_y2 = 0;
	int big_x1 = 0, big_y1 = 0;
	int big_x2 = 0, big_y2 = 0;
	int square_x1 = 0, square_y1 = 0 ,square_x2=0, square_y2=0;
	int width = 0, height = 0; //겹치는 영역의 직사각형 가로,세로

	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if (x1 > x2)
	{
		small_x1 = x2;
		big_x1 = x1;
	}
	else
	{
		small_x1 = x1;
		big_x1 = x2;
	}
	if (y1 > y2)
	{
		small_y1 = y2;
		big_y1 = y1;
	}
	else
	{
		small_y1 = y1;
		big_y1 = y2;
	}
	if (x3 > x4)
	{
		small_x2 = x4;
		big_x2 = x3;
	}
	else
	{
		small_x2 = x3;
		big_x2 = x4;
	}
	if (y3 > y4)
	{
		small_y2 = y4;
		big_y2 = y3;
	}
	else
	{
		small_y2 = y3;
		big_y2 = y4;
	}
	if (small_x1 > small_x2)
		square_x1 = small_x1;
	else
		square_x1 = small_x2;

	if (big_x1 > big_x2)
		square_x2 = big_x2;
	else
		square_x2 = big_x1;

	if (square_x1 > square_x2)
	{
		width = 0;
		printf("겹치지 않습니다.\n");
	}
	else
		width = square_x2 - square_x1;

	if (small_y1 > small_y2)
		square_y1 = small_y1;
	else
		square_y1 = small_y2;
	
	if (big_y1 > big_y2)
		square_y2 = big_y2;
	else
		square_y2 = big_y1;

	if (square_y1 > square_y2)
	{
		height = 0;
		printf("겹치지 않습니다.\n");
	}
	else
		height = square_y2 - square_y1;

	printf("%d\n", width * height);
}