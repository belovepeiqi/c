#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void Game()
{

	srand(time(0));
	int result = rand() % 100 + 1;
	while (1) {
		int num = 0;
		printf("请输入一个数字[1-100]:\n");
		scanf("%d", &num);
		if (num > result) {
			printf("猜高了！\n");
		}
		else if (num < result) {
			printf("猜低了！\n");
		}
		else if (num == result) {
			printf("猜对了！\n");
			break;
		}
	}
}
int Menu() 
{
	printf("==========================\n");
	printf("       1.开始游戏\n");
	printf("       2.结束游戏\n");
	printf("==========================\n");
	printf("请输入的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() {

	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
		
			printf("游戏结束\n");
			break;
		}
		else {
			printf("非法输入！\n");
		}
	}
	system("pause");
}
