//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main ()
{
int n;
printf("enter number :");
scanf("%d",&n);
if(n>99 && n<999)
{
printf("The number is three digit :");
}
else
printf("The number is not three digit");
return 0;
}
