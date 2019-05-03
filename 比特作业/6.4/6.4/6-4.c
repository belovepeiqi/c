#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
void Init(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
}

void empty(int arr[10], int sz)
{
	memset(arr, 0, sz * sizeof(arr[0]));
}

void reverse(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = temp;;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,5,4,6,8,7,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr);
	empty(arr, sz);
	reverse(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
