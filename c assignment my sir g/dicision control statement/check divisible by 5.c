// Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main ()
{
int n;
printf("enter number :");
scanf("%d",&n);
if(n%5==0)
{
printf("the number %d is divisible by 5 :",n);
}
else
printf("the number %d in not divisible by 5 :",n);
return 0;
}
