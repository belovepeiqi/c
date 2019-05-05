#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>

int nPowersOfk(int n, int k)
{
	if (k == 0)
	{
		return 0;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n * nPowersOfk(n, k - 1);
	}
}
int main()
{
	int n = 3;
	int k = 3;
	printf("%d\n", nPowersOfk(n, k));
	system("pause");
	return 0;
}