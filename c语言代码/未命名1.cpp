/*#include <stdio.h>
int main()
{
	int line = 0;
    int i = 0;
//1. ��ӡ�ϰ벿��
for(i=0; i<line; i++)
{
    //��ӡһ��
    //1. ��ӡ�ո�
    int j = 0;
    for(j=0; j<line-1-i; j++)
    {
        printf(" ");
    }
    //2. ��ӡ*
    for(j=0; j<2*i+1; j++)
    {
        printf("*");
    }
    printf("\n");
}
//2. ��ӡ�°벿��
for(i=0; i<line-1; i++)
{
    //��ӡһ��
    //1. ��ӡ�ո�
    int j = 0;
    for(j=0; j<i+1; j++)
    {
        printf(" ");
    }
    //2. ��ӡ*
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
	int i = 0;                             /*iΪ����,jΪÿ���е�����*/
		for(i=1;i<=n/2+1;i++)               /*��ӡ�����ǣ��������м��У�*/
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
		for(i=n/2;i>=1;i--)               /*��ӡ�����ǣ����������м��У�*/
		{                             /*��i��Ϊ���������Ͳ����ٴο���ÿ������Ĵ�ӡ���¸�forѭ������ֱ�Ӹ��������ǲ���*/
			for(j=1;j<=n/2+i;j++)         /*���forѭ����������һ�� */
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
	return 0;
}


