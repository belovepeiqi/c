#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
		int i = 0;
		int arr1[] = { 1,2,3,4,5 };
		int arr2[] = { 6,7,8,9,10 };
		printf("\n第一个数组(交换后):\n");
		for (i = 0; i < 5; i++)
		{
			int temp = 0;
			temp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = temp;
			printf("%d ", arr1[i]);
		}
		printf("\n第二个数组(交换后):\n");
		for (i = 0; i < 5; i++)
		{
			printf("%d ", arr2[i]);
		}
	system("pause");
	return 0;
}