// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
int a=10,b=20;
a=a+b;
b=a-b;
a=a-b;
printf("the swap number is a=%d b=%d:",a,b);
return 0;
}

