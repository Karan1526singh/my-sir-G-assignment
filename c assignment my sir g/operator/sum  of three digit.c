// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
int n,a,b,c;
printf("enter a three digit number : ");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%20;
printf("the sum is %d:",a+b+c);
return 0;
}
