//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include <stdio.h>
int main() {
int n1,n2,n3;
printf("Enter three number :");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
{
printf("%d is greater ",n1);
}
if(n2>n1 && n2>n3)
{
printf("%d is greater ",n2);
}
else
printf("%d is greater ,",n3);
return 0;
}
