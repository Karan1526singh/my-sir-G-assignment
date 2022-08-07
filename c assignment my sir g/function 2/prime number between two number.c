//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
int prime_no(int n, int m)
{
int count;
while(n<=m)
{
count=0;
for(int j=1;j<=n;j++)
{
if(n%j==0)
count++;
}
if(count==2)
{
printf("%d ",n);
}
n++;
}
}
int main(){
int num1,num2;
printf("Enter two number: ");
scanf("%d%d",&num1,&num2);
prime_no(num1,num2);
return 0;
}
