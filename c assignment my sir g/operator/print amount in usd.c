// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
#include<stdio.h>
int main()
{
float usd ,n ;
printf("enter a money in inr :");
scanf("%f",&n);
usd=n/76.23;
printf("the amount in usd is %f",usd);
return 0;
}
