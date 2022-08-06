#include<stdio.h>
int main()
{
    int a[10];
    int sum = 0;
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
     }

    printf("the sum of 10 number is %d",sum);
    return 0;
}
