#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入十个整数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		max = a[0];
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("十个数中的最大值为：%d\n", max);
	system("pause");
	return 0;
}