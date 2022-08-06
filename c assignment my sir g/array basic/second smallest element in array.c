#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=10;i++)
    {
       b[i]=a[i];
    }
     for(int i=1;i<=10;i++)
    {
       printf("\n%d",b[i]);
    }


    return 0;
}





