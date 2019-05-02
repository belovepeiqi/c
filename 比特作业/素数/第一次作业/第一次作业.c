#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int sushu(int n)
{
	int i, m;
	m = sqrt(n + 1);
	for (i = 2; i <= m; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
void main()
{
	int n, k;
	printf("\n");
	for (n = 100; n <= 200; n++)
	{
		k = sushu(n);
		if (k == 1)
		{
			printf("%4d\n ", n);
		}
	}
	system("pause");
	return 0;
}