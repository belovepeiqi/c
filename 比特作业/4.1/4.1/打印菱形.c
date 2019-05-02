#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 13;
	int j = 0;
	int i = 0;
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (j = 1; j <= n / 2 + i; j++)
		{
			if (j >= n / 2 - i + 2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i = n / 2; i >= 1; i--)
	{
		for (j = 1; j <= n / 2 + i; j++)
			if (j >= n / 2 - i + 2)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	system("pause");
	return 0;
}

