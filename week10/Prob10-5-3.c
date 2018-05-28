#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 100

int check(int dir, int len, int x, int y, int arr[][MAX])
{
	int offset[][2] = { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } };
	//
	for (int i = 0; i < len; i++){
		if (arr[x][y] == 1) return 1;
		x += offset[dir][0];
		y += offset[dir][1];
	}
	return 0;
}

int main()
{
	int bool_data[MAX][MAX] = { 0, };
	int offset[][2] = { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } };
	int location_x, location_y;
	int x = 0, y = 0;
	int dir, len;
	//
	location_x = MAX / 2;
	location_y = MAX / 2;
	//
	while (1) {
		int tmp_x = location_x, tmp_y = location_y;
		scanf("%d %d", &dir, &len);

		if (dir<0 || dir>3) continue;
		if (len < 0) continue;
		//
		if (check(dir, len, tmp_x, tmp_y, bool_data) == 1){
			printf("invalid move\n");
			continue;
		}
		for (int i = 0; i < len; i++){
			bool_data[location_x][location_y] = 1;
			location_x += offset[dir][0];
			location_y += offset[dir][1];
		}
		//
		for (int i = 0; i < len; i++){
			x += offset[dir][0];
			y += offset[dir][1];
		}
		//
		printf("%d %d\n", y, x);
	}
}