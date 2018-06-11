#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main()
{
	char data[100];
	scanf("%s", data);
	int count = strlen(data);
	int tmp;

	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
	for (int i = 0; i < count; i++)
	{
		printf("%c", data[i]);
	}

}