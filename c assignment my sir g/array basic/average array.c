#include<stdio.h>
int main()
{
    int a[10];
    float avg = 0;
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        avg=avg+a[i];
    }
    avg=avg/10.0;
    printf("Average is %f",avg);
    return 0;
}
