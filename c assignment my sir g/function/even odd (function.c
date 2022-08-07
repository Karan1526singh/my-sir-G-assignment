//Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int checkevenodd(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the value :");
    scanf("%d", &num);
    printf("\n the value is %d", checkevenodd(num));
    return 0;
}
