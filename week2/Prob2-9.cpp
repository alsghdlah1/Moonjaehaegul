#include<stdio.h>
void main()
{
	int x1, y1 = 0;
	int x2, y2 = 0;
	int x3, y3 = 0;
	int x4, y4 = 0;

	printf("좌표를 입력해주세요.\n");
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if (y2 == y1 && x3 == x2 && y4 == y3 && x1 == x4 && x1 != x2 && y2 !=y3
		|| x1 == x2 && y2 == y3 && x3 == x4 && y4 == y1 &&y1 !=y2 && x2 !=x3) 
		//위에 줄은 반시계 방향 , 아랫줄은 시계방향으로 만들어졌을때.
		printf("Yes\n");
	else
		printf("NO\n");

}