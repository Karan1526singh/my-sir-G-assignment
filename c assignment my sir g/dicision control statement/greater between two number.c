// Write a program to print greater between two numbers. Print one number of both are
//the same.
#include<stdio.h>
int main ()
{
int n1,n2;
printf("enter first number :");
scanf("%d",&n1);
printf("\n enter second number :");
scanf("%d",&n2);
if(n1>n2)
{
printf("The number %d is greater :",n1);
}
else
printf("The number %d is greater :",n2);
return 0;
}
