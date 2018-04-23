#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n1, n2;
	int data1[100], data2[100];
	scanf("%d %d", &n1, &n2);

	int tmp1 = n1, n = 0; 
	while (tmp1 > 0) {
		data1[n++] = tmp1 % 10;
		tmp1 /= 10;
	}
	int tmp2 = n2, h = 0; 
	while (tmp2 > 0) {
		data2[h++] = tmp2 % 10;
		tmp2 /= 10;
	}
	for (int i = n - 1, j = h - 1; i >= 0 && j >= 0; i--, j--) {
		if (data1[i] < data2[j]) {
			printf("%d %d\n", n1, n2);
			return 0;
		}
		else if (data1[i] > data2[j]) {
			printf("%d %d\n", n2, n1);
			return 0;
		}
	}
	if (n <= h) printf("%d %d\n", n1, n2);
	else printf("%d %d\n", n2, n1);
}