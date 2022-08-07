//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime_or_not(int n)
{
int count=0;
for(int i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
return 1;
else
return 0;
}
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(prime_or_not(num))
printf("prime number ");
else
printf("not prime number ");
return 0;
}
