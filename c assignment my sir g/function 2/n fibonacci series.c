//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
int fib(int n)
{
int first=1;
int second=1;
int k;
printf("series are :%d %d ",first , second);
for(int i=1;i<=n;i++)
{
k=first+second;
printf("%d ",k);
first=second;
second=k;
}
}
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
fib(num);
return 0;
}
