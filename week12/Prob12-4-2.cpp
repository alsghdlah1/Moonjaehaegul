#include<stdio.h>
#include<string.h>

int main()
{
	char data[10000];
	char tmp;
	int wordCount = 0; //단어의 갯수
	int charCount = 0; //문자의 개수
	int nowStateInword = 0; //지금 있는 위치가 단어 안이면 1. 아니면 0.
	int i = 0;
	FILE * in_fp = fopen("input12-4.txt", "r");
	//FILE *out_fp = fopen("output12-4.txt", "w");
	while (fscanf(in_fp, "%c", &data[i++]) != EOF)
	{ 
		if (data[i - 1] >= 'a' && data[i - 1] <= 'z')
		{
			charCount++;
			if (nowStateInword == 0)
				nowStateInword = 1;
		}
		else
		{
			if (nowStateInword == 1)
			{
				if (data[i - 1] == '(')
				{
					nowStateInword = 2;
				}
				else if (data[i - 1] == ' ' || data[i - 1] == ',' || data[i - 1] == '.')
				{
					nowStateInword = 0;
					wordCount++;
				}
			}
			else if (nowStateInword == 2)
			{
				if (data[i - 1] == ')')
				{
					wordCount++;
					nowStateInword = 0;
				}
			}
		}
	}
	fclose(in_fp);

}