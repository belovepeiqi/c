#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 3, 3, 1, 4, 6, 4, 5, 5 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (i = 1; i < len; i++)
	{
		arr[0] = arr[0] ^ arr[i];
	}
	printf("%d\n", arr[0]);
	system("pause");
	return 0;
}
