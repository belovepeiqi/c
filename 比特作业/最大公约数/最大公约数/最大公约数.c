#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{
	int a = 6;
	int b = 8;
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("b =%d\n", b);
	system("pause");
	return 0;
} 