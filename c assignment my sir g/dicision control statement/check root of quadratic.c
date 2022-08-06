//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main ()
{
int b,a,c;
printf("Enter the value of b:");
scanf("%d",&b);
printf("\n enter the value of a and c :");
scanf("%d %d",&a,&c);
if(b*b-4*a*c>0)
{
printf("Roots are real and distinct :");
}
else if (b*b-4*a*c>=0)
{
printf("Roots are real and equal :");
}
else
printf("Roots are imagenary :");
return 0;
}
