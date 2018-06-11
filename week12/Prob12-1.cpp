#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
/*
int main()
{
	char data[100];
	scanf(" %s", data);
	int count = 0;
	
	while (data[count++] != '\0'){ }

	for (int i = count - 2; i >= 0; i--)
	{
		printf("%c", data[i]);
	}

	return 0;
}
*/
int main()
{
	int count;
	char data[100];
	scanf(" %s", data);

	count = strlen(data);
	for (int i = count-1; i >= 0; i--)
	{
		printf("%c", data[i]);
	}
	return 0;
}