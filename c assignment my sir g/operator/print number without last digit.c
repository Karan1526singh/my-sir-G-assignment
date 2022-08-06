//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
int a,n;
printf("enter a number ");
scanf("%d",&n);
n=n/10;
printf("the number without last digit is %d:",n);
return 0;
}
