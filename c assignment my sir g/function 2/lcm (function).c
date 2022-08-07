//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int x,int y)
{
int i;
for(i=x>y?x:y; i<=x*y; i++)
if(i%x==0 && i%y==0)
break;
return i;
}
int main(){
int x,y;
printf("Enter two number: ");
scanf("%d%d",&x,&y);
printf("LCM is %d",lcm(x,y));
return 0;
}
