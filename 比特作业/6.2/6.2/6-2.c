#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 1;
	int b = 2;
	my_swap(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
