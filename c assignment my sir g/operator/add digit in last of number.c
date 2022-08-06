// Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
int a,n ;
printf("enter a number :");
scanf("%d",&n);
printf("enter a digit :");
scanf("%d",&a);
n=n*10;
n=n+a;
printf("the number with digit is : %d",n);
return 0;
}
