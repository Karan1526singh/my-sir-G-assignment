// Write a program to check whether a given number is an even number or an odd
//number.
#include<stdio.h>
int main ()
{
int n;
printf("enter number :");
scanf("%d",&n);
if(n%2==0)
{
printf("the number %d is even :",n);
}
else
printf("the number %d is not even :",n);
return 0;
}
