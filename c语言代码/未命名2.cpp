
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
    //list[a]记录第一个左比右小的数字
    //list[b]记录逆序区中最小的比list[a]大的数字
    int a=0,b=0;
    //计算循环轮次
    int num=1;
    for(int i=n;i>0;i--)
        num=num*i;
    for(int j=0;j<num;j++)
    {
        //展示当前情况
    show(list,n);
    //寻找list[a]
    for(int i=n-1;i>0;i--)
    {
        if(list[i-1] < list[i])
        {
            a=i-1;
            break;
        }
    }
    //寻找list[b]
    int min=65535;
    for(int i=n-1;i>a;i--)
    {
        if(list[i] < min && list[i]>list[a])
        {
            b=i;
            min=list[i];
        }
 
    }
    //交换list[a]与list[b]
    swap(list,a,b);
    //排序逆序区
    bubbleSort(list,a,n);
    }
}

