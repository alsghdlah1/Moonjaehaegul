#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int start[20] = { 0 };
	int end[20] = { 0 };
	int n=0;
	int len = 0, maxLen = 0;
	int max_start = 0, max_next_start = 0;
	FILE *fp = fopen("input9.txt", "r");
	while (fscanf(fp, "%d %d", &start[n], &end[n]) != EOF)
	{
		n++;
	}
	fclose(fp);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (start[i] == start[j])
			{
				//right[i] = (right[i + 1] > tank[i]) ? right[i + 1] : tank[i];
				if (end[i] > end[j])
					len = end[j] - start[i];
				else
					len = end[i] - start[i];
			}
			else if (start[i] < start[j])
			{

			}
			if (len > maxLen)
			{
				maxLen = len;
				max_start = i;
				max_next_start = j;
			}
		}
\
	}
}