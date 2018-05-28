#pragma warning(disable:4996)
#include<stdio.h>
//input5.txt에서 데이터를 읽어오면, data[]라는 배열에 저장한 뒤, 
//그 배열에서 값을 2개씩 읽어 compare함수로 전달 해서 반환한다.
int compareLexicographic(int a, int b)
{
	int arr1[8] , arr2[8];
	int tmp1 = a, tmp2 = b;
	int k = 0, h = 0;
	if (a == b)
		return 0;

	while (tmp1 > 0)
	{
		arr1[k++] = tmp1 % 10;
		tmp1 /= 10;
	}
	while (tmp2 > 0)
	{
		arr2[h++] = tmp2 % 10;
		tmp2 /= 10;
	}
	int temp;
	for (int i = k - 1, j = h - 1; i >= 0 && j >= 0; i--, j--)
	{
		if (arr1[i] < arr2[j])
			return -1;
		else if (arr1[i] > arr2[j])
			return 1;
		else if (arr1[i] == arr2[j])
		{
			if (i != 0 && j != 0)
				continue;
			temp = (i < j) ? -1 : 1;
			return temp;
		}
	}
}

int main()
{
	int data[100], n = 0;
	int result[50];
	int k = 0;
	FILE *fp = fopen("input5.txt", "r");
	while (!feof(fp))
	{
		fscanf(fp, "%d", &data[n++]);
	}
	fclose(fp);

	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (compareLexicographic(data[j], data[j + 1]) > 0)
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", data[i]);
	return 0;
}