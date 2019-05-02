#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a = 2;
	int i = 0;
	int sum = 0;
	int add = 0;
	if (a >= 10 || a <= 0) 
	{  
		return 0;
	}
	for (i = 0; i < 5; i++) 
	{
		add = add * 10 + a;
		sum = sum + add;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;

}