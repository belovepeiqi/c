#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
int Findnum(int arr[ROW][COL], int row, int col, int key)
{
	int left = 0;
	int right = col - 1;
	while ((left >= 0) && (right < col))
	{
	
		if (arr[left][right] < key)
		{
			left++;
		}
	
		if (arr[left][right] > key)
		{
			right--;
		}

		if (arr[left][right] == key)
		{
			return 1;
		}
	}

	return 0;

}
int main()
{

	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int key = 9;

	int ret = Findnum(arr, ROW, COL, key);
	if (1 == ret)
	{
		printf("找到了！\n");
	}
	if (0 == ret)
	{
		printf("找不到!\n");
	}



	system("pause");
	return 0;
}
