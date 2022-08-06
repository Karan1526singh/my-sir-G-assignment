#include<stdio.h>
int main()
{
    int a[10],b[10],j,k;
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++)
    {
        for( j=i+1;j<=9;j++)
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }

            b[i]=a[i];
    }
            printf("second largest element %d ",b[1]);

    return 0;
}




