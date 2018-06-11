#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char str[MAX];
	FILE *fp1 = fopen("input12-4.txt", "r");
	FILE *fp2 = fopen("input2.txt", "w");
	int i = 0;
	while (fscanf(fp1, "%s ", str) != EOF) {
		i += strlen(str) + 1;
		if (i <= 80) fprintf(fp2, "%s ", str);
		else {
			fprintf(fp2, "\n%s ", str);
			i = strlen(str) + 1;
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}