#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,k;
	int index = 0;
	int max = -9999999, abs = 0;
	int arr[100] = { 0 };
	printf("몇 개를 사용할 것인가요? 100이하를 입력해주세요.\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("K보다 작거나 같으면서 가장 큰 정수를 찾기\n");
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