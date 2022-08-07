//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int a , int b)
{
int k;
for(int i = 1; i <= a || i <= b; i++) {
if( a%i == 0 && b%i == 0 )
k = i;
}
return k;
}
int main(){
int x,y;
printf("Enter two number: ");
scanf("%d%d",&x,&y);
printf("hcf is %d",hcf(x,y));
return 0;
}
