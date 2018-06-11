#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#define MAX_WORD 4000
#define MAX_LEN 20

char dict[MAX_WORD][MAX_LEN];
char grid[MAX_LEN][MAX_LEN];
int n_words; // 실제 사전에 저장된 단어의 수
int n2_words;
int search(int i);
char get_char(int i, int j, int dir, int dist);

void read_dictionary()
{
	n_words = 0, n2_words = 0;
	FILE* dic_fp = fopen("dictionary.txt", "r");
	while (fscanf(dic_fp, "%s", dict[n_words]) != EOF)
		n_words++;
	fclose(dic_fp);
}
void read_grid()
{
	FILE* grid_fp = fopen("grid.txt", "r");
	while (fscanf(grid_fp, "%s", grid[n2_words]) != EOF)
		n2_words++;
	fclose(grid_fp);
}
int main()
{
	read_dictionary();
	read_grid();
	int i;
	for (i = 0; i < n_words; i++)
	{
		int result = search(i);
		if (result == 1)
			printf("%s\n", dict[i]);
	}
	return 0;
}
int search(int count)
{
	int word_len = strlen(dict[count]);
	int grid_len = strlen(grid[0]);

	for (int i = 0; i < grid_len; i++)
	{
		for (int j = 0; j < grid_len; j++)
		{//grid[i][j] 글씨가, 사전에서의 첫번째 글자가 아니라면, continue;
			if (grid[i][j] != dict[count][0])
				continue;
			for (int dir = 0; dir < 8; dir++)
			{
				int dist = 1;
				for (; dist < word_len; dist++)
				{
					char ch = get_char(i, j, dir, dist);
					if (ch == '\0' || ch != dict[count][dist])
						break;
				}
				if (dist >= word_len)
				{
					//printf("Found at %d %d %d %d.\n", i, j, dir, dist);
					return 1;
				}
			}
		}
	}
}
char get_char(int i, int j, int dir, int dist)
{
	int newi, newj;
	int offseti[] = {  0, 1, 1, 1, 0, -1, -1, -1 };
	int offsetj[] = { -1,-1, 0, 1, 1, 1, 0, -1 };

	newi = i + dist*offseti[dir];
	newj = j + dist*offsetj[dir];

	if (newi < 0 || newi >= 6 || newj < 0 || newj >= 6)
		return -1;
	else
		return grid[newi][newj];
}