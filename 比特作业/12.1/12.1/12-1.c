#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

unsigned int get_value(unsigned int N)
{
	unsigned int value = 1;
	for (unsigned int i = 0; i < N; ++i)
	{
		value *= 2;
	}
	return value;
}
unsigned int reverse_bit(unsigned int value)
{
	char arr[32] = { 0 };
	int i = 31;
	unsigned int result = 0;
	while (value)
	{
		arr[i--] = value % 2 + '0';
		value >>= 1;
	}
	for (; i >= 0; i--)
		arr[i] = arr[i] + '0';
	for (int j = 0; j < 32; ++j)
	{
		unsigned int ret = arr[j] - '0';
		result += ret * get_value(j);
	}
	return result;
}
void main()
{
	unsigned int value = 30;
	printf("%u\n", reverse_bit(value));
	system("pause");
}
