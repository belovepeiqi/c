#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			k++;
		}
		if (i / 10 == 9)
		{
			k++;
		}
	}
	printf("1-100中9的个数为：%d\n", k);
	system("pause");
	return 0;
}