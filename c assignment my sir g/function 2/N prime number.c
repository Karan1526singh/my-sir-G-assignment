//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
int prime_no(int n)
{
int count;
int i=2;
while(i<=n)
{
count=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
{
printf("%d ",i);
}
i++;
}
}
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
prime_no(num);
return 0;
}
