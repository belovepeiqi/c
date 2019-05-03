
#include<stdio.h>
void show(int list[],int n);
void swap(int list[],int a,int b);
void bubbleSort(int list[],int a,int n);
void dictionaryOrderAlgorithm(int list[],int n);
int main()
{
	int list[]={1,2,3,4,5,6,7,8,9};
	int n=0;
	printf("How many numbers:");
	scanf("%d",&n);
	dictionaryOrderAlgorithm(list,n);
}
 
void show(int list[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",list[i]);
    printf("\n");
}
void swap(int list[],int a,int b)
{
    int temp=0;
    temp=list[a];
    list[a]=list[b];
    list[b]=temp;
}
void bubbleSort(int list[],int a,int n)
{
    int temp;
    int flag=1;
    while(flag==1)
    {
        flag=0;
        for(int i=n-1;i>a+1;i--)
        {
            if (list[i]<list[i-1])
            {
                temp=list[i-1];
                list[i-1]=list[i];
                list[i]=temp;
                flag=1;
            }
        }
    }
}
void dictionaryOrderAlgorithm(int list[],int n)
{
    //list[a]��¼��һ�������С������
    //list[b]��¼����������С�ı�list[a]�������
    int a=0,b=0;
    //����ѭ���ִ�
    int num=1;
    for(int i=n;i>0;i--)
        num=num*i;
    for(int j=0;j<num;j++)
    {
        //չʾ��ǰ���
    show(list,n);
    //Ѱ��list[a]
    for(int i=n-1;i>0;i--)
    {
        if(list[i-1] < list[i])
        {
            a=i-1;
            break;
        }
    }
    //Ѱ��list[b]
    int min=65535;
    for(int i=n-1;i>a;i--)
    {
        if(list[i] < min && list[i]>list[a])
        {
            b=i;
            min=list[i];
        }
 
    }
    //����list[a]��list[b]
    swap(list,a,b);
    //����������
    bubbleSort(list,a,n);
    }
}

