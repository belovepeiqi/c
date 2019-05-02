#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{

	int  x, y, t;
	scanf("%d %d", &x, &y);

	  t = x;
	  x = y;
	  y = t;

	printf("%d %d\n", x, y);

	system("pause");
	return 0;
}