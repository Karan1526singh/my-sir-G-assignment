//Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
int n;
printf("How many terms you want to print: ");
scanf("%d", &n);
int x = 0, y = 1;
int sum=0;
if (n == 1)
printf("0 ");
else if (n == 2)
printf("1 ");
else
{
printf("0 1 ");
for (int i = 3; i <= n; i++)
{
sum = x + y;
x = y;
y = sum;
printf("%d ",sum);
}
}
return 0;
}
