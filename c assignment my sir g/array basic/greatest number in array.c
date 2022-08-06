
#include<stdio.h>
int main()
{
    int a[10];
    int k=0,v;
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=9;i++)
    {
            if(a[0]<a[i])
            {
                a[0]=a[i];
            }
    }
    printf("the greatest number in array is %d",a[0]);
    return 0;
}

