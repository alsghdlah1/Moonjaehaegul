#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,k;
	int index = 0;
	int max = -9999999, abs = 0;
	int arr[100] = { 0 };
	printf("�� ���� ����� ���ΰ���? 100���ϸ� �Է����ּ���.\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("K���� �۰ų� �����鼭 ���� ū ������ ã��\n");
	scanf("%d", &k);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= k && max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	abs = k - max;
	if (abs < 0)
		abs = -abs;

	if (max > k)
		printf("%d %d %d", index, max, abs);
	else
		printf("-1\n");
	return 0;
}