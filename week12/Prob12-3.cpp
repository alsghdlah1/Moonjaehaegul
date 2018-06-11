#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int changeLargetoSmall(char* data1, char* data2, int count1, int count2)
{
	for (int i = 0; i < count1; i++)
	{
		if ((data1[i] >= 'A') && (data1[i] <= 'Z'))
			data1[i] = data1[i] - 'A' + 'a';
	}
	for (int i = 0; i < count2; i++)
	{
		if ((data2[i] >= 'A') && (data2[i] <= 'Z'))
			data2[i] = data2[i] - 'A' + 'a';
	}
	return 0;
}

int Anagram(char data1[], char data2[], int count1, int count2)
{
	if (count1 != count2)
		return -1;

	int radix_arr1[26] = { 0 }, radix_arr2[26] = { 0 }, idx = 0;
	while (data1[idx] != '\0')
	{
		radix_arr1[data1[idx] - 'a']++;
		idx++;
	}
	idx = 0;
	while (data2[idx] != '\0')
	{
		radix_arr2[data2[idx] - 'a']++;
		idx++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (radix_arr1[i] != radix_arr2[i])
			return -1;
	}
	return 1;
}

int main()
{
	char data1[100], data2[100];
	scanf("%s %s", data1, data2);
	int count1 = strlen(data1);
	int count2 = strlen(data2);

	changeLargetoSmall(data1, data2, count1, count2);
	if (Anagram(data1, data2, count1, count2) == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}