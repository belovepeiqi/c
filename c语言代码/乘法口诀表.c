#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=9;i++)
	{
      
        for(j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        
        printf("\n");
    }
	system("pause");
	return 0;
}
