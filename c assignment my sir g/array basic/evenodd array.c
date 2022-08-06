
#include<stdio.h>
int main()
{
    int a[10];
    int sum = 0;
    int summ=0;
    printf("enter 10 number :");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum = sum + a[i];
        }
        else
            sum= sum + a[i];
    }
    printf(" sum of even number is %d",sum);
    printf("\n the sum of odd number is  %d",sum);
    return 0;
}
