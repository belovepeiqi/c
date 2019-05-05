#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要求的第多少个斐波那契数：");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include <stdlib.h>

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("请输入要求的第多少个斐波那契数：");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}