//Write a program to check whether a given number is an even number or an odd
//number without using % operator.
#include<stdio.h>
int main ()
{
int n;
printf("enter number :");
scanf("%d",&n);
if(!(n&1))
{
printf("the number %d is even ",n);
}
else
printf("the number %d is not even ",n);
return 0;
}
