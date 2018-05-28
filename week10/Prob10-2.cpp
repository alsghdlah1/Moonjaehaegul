#pragma warning(disable:4996)
#include<stdio.h>
int find(int* data, int input, int s)
{
	for (int i = 0; i < 100; i++)
	{
		if (data[i] == input)
		{
			return i;
		}
	}
	return -1;
}
int insert(int* data, int input, int s)
{
	int tmp = s - 1;
	while (data[tmp] > input && tmp>=0)
	{
		data[tmp + 1] = data[tmp];
		tmp--;
	}
	data[tmp + 1] = input;

	return *data;
}
int main()
{
	int data[100];
	int s = 0;
	int input;
	while (1)
	{
		scanf("%d", &input);
		if (input == -1) break;

		if (find(data, input, s) != -1)
		{
			printf("duplicate entry %d", find(data, input, s));
			continue;
		}
		if (find(data,input,s) == -1)
		{ 
			insert(data,input,s);
			s++;
		}
		for (int i = 0; i < s; i++)
			printf("%d ", data[i]);
		printf("\n");
	}


}