/*#include <stdio.h>
int main()
{
	int line = 0;
    int i = 0;
//1. 打印上半部分
for(i=0; i<line; i++)
{
    //打印一行
    //1. 打印空格
    int j = 0;
    for(j=0; j<line-1-i; j++)
    {
        printf(" ");
    }
    //2. 打印*
    for(j=0; j<2*i+1; j++)
    {
        printf("*");
    }
    printf("\n");
}
//2. 打印下半部分
for(i=0; i<line-1; i++)
{
    //打印一行
    //1. 打印空格
    int j = 0;
    for(j=0; j<i+1; j++)
    {
        printf(" ");
    }
    //2. 打印*
    for(j=0; j<2*(line-1-i)-1; j++)
    {
        printf("*");
    }
    printf("\n");
}

}*/
#include<stdio.h>                         
int main (void)
{
	int n = 13;
	int j = 0;
	int i = 0;                             /*i为行数,j为每行中的项数*/
		for(i=1;i<=n/2+1;i++)               /*打印上三角，（包括中间行）*/
		{
			for(j=1;j<=n/2+i;j++)       
			{
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		for(i=n/2;i>=1;i--)               /*打印下三角，（不包括中间行）*/
		{                             /*将i改为倒序，这样就不必再次考虑每行中项的打印，下个for循环可以直接复制上三角部分*/
			for(j=1;j<=n/2+i;j++)         /*这个for循环与上三角一致 */
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
	return 0;
}


