#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int data[100], n = 0;
	FILE *fp = fopen("input6-3.txt", "r");
	while (!feof(fp))
		fscanf(fp, "%d", &data[n++]);
	fclose(fp);
	for (int i = n - 1; i > 0; i--) {
		int max = 0;
		for (int j = 1; j <= i; j++) {
			if (data[j] > data[max])
				max = j;
		}
	
			int tmp = data[i];
			data[i] = data[max];
			data[max] = tmp;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", data[i]);
}