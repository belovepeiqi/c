#include "stdio.h"
int main(){
	int i,j;
	//��ʼ��һ����
	for(i = 1; i <= 8; i++){
 
		//�����һ���ֿո�
		for(j = 1; j <= (9 - i); j++){
			printf(" ");
		}
 
		//�����һ�����Ǻ�
		for(j = 1;j <= (-1 + 2 * i); j++){
			printf("*");
		}
		printf("\n");
	
	}
 
	//��ʼ�ڶ�����
	for(i = 1; i <= 8; i++){
 
		//����ڶ����ֿո�
		for(j = 1;j <= ( 8 + i - 1 );j++){
			printf(" ");
		}
 
		//����ڶ������Ǻ�
		for(j = 1;j <= ( 8 - 2 * i );j++){
			printf("*");
		}
		printf("\n");
 
	}
return 0;
}
