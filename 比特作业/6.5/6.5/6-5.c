#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void su_print(int m)
{
	int i = 0;
	for (i = 2; i < m; i++)
	{
		if (m%i == 0)
		{
			break;
		}
	}
	if (i >= m)
	{
		printf("�����������\n");
	}
	else
	{
		printf("�������������\n");
	}

}
int main()
{
	int input = 0;
	printf("��������Ҫ�жϵ���\n");
	scanf("%d", &input);
	su_print(input);
	system("pause");
	return 0;
}
