#pragma warning(disable:4996)
#include<stdio.h>
/*
bool checkLeader(int tmp, int leader)
{
	if (tmp >= leader)
		return true;
	return false;
}
int main()
{
	int n = 0, leader;
	int data[100];
	FILE *fp = fopen("input10-1.txt", "r");
	fscanf(fp, "%d", &leader);
	data[n++] = leader;

	while (fscanf(fp, "%d", &data[n]) != EOF)
	{
		if (checkLeader(data[n], leader) == true)
			leader = data[n++];
	}
	fclose(fp);
	printf("%d : ", n);
	for (int i = 0; i < n; i++)
		printf("%d ", data[i]);
	
	return 0;
}
*/
int checkLeader(int tmp, int leader)
{
	if (tmp >= leader)
		return 1;
	return -1;
}

int main()
{
	int data[100];
	int leader , t = 0;
	int tmp = 0, i = 0;

	FILE * fp = fopen("input10-1.txt", "r");
	while (fscanf(fp, "%d", &data[i++]) != EOF)
	fclose(fp);

	leader = data[0];
	for (int j = 1; j < i; j++)
	{
		if (checkLeader(data[j], leader) > 0)
		{
			leader = data[j];
			t++;
			data[t] = data[j];
		}
	}
	printf("%d :", t+1);
	for (int k = 0; k < t+1; k++)
	{
		printf("%d ", data[k]);
	}

	return 0;
}
