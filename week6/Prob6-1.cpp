#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int data[100] = { 0 };
	int n = 0, k;
	while (1) {
		scanf("%d", &k);
		if (k == -1) break;
		bool flag = false;
		for (int i = 0; i<n; i++) {
			if (data[i] == k) {
				flag = true;
				break;
			}
		}
		if (flag) {
			printf("duplicate entry\n");
			continue;
		}
		int i = n - 1;
		while (i >= 0 && data[i] > k) {
			data[i + 1] = data[i];
			i--;
		}
		data[i + 1] = k;
		n++;
		for (i = 0; i<n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
}