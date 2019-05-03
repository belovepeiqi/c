#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë: ");
		scanf("%s", password);
		if (0 == strcmp(password, "554598"))
		{
			break;
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");

		}

	}
	if (i < 3)
	{
		printf("µÇÂ¼³É¹¦\n");
	}
	else
	{
		printf("µÇÂ¼Ê§°Ü\n");

	}
	system("pause");
	return 0;
}

