#include<stdio.h>
int main()
{
        int a = 0;
        int b = 0;
        int c = 0;
        int count = 0;
        for (int i = 100;i < 1000;i++)
           {
              a = i % 10;
              b = (i / 10) % 10;
              c = (i / 100) % 10;
                if (i == a * a*a + b * b*b + c * c*c)
                   {
                       count++;
                       printf("%d\n", i);
                    }
            }
        printf("count=%d", count);
        //system("pause");
        return 0;   
}
