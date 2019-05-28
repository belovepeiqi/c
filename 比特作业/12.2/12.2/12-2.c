#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0;
	int avg = 0;
	scanf("%d %d", &a, &b);
	avg = (a + b) >> 1;
	printf("%d\n", avg);
	system("pause");
	return 0;
}
