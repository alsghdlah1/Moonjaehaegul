#pragma warning(disable:4996)
#include<stdio.h>
int lenofoverlap(int sa, int ta, int sb, int tb)
{
	int area = 0, width = 0, height = 0;
	if (sa > ta || sb > tb) return -1;

	width = (ta > sa) ? (ta - sa) : (-(sa - ta));
	height = (tb > sb) ? (tb - sb) : (-(sb - tb));
	area = width * height;
	return area;	
}

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int sa = 0, ta = 0, sb = 0, tb = 0;
	int tmp;
	int area = 0;

	if (x1 > x2) 
	{
		tmp = x2;
		x2 = x1;
		x1 = tmp;
	}
	if (y1 > y2)
	{
		tmp = y2;
		y2 = y1;
		y1 = tmp;
	}
	if (x3 > x4)
	{
		tmp = x4;
		x4 = x3;
		x3 = tmp;
	}
	if (y3 > y4)
	{
		tmp = y4;
		y4 = y3;
		y3 = tmp;
	}

	sa = (x1 > x3) ? x1 : x3;
	sb = (y1 > y3) ? y1 : y3;
	ta = (x2 > x4) ? x4 : x2;
	tb = (y2 > y4) ? y4 : y2;
	area = lenofoverlap(sa, ta, sb, tb);
	printf("%d", area);
	return 0;
}
