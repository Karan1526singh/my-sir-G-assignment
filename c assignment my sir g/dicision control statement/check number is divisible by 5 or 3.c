//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
int num1;
printf("enter number for check of divisibilty of 7 and 3->\n");
scanf("%d",&num1);
if(num1%5==0 || num1%3==0)
{
printf("\n number is divisible ");
}
else
printf("number is not divisible ");
return 0;
}
