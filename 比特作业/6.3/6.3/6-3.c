#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int my_YEAR(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int main()
{
	int input = 0;
	printf("������һ�����\n");
	scanf("%d", &input);
	my_YEAR(input);
	if (my_YEAR(input))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
	
}
