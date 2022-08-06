/*
1
121
12321
1234321
*/
#include <stdio.h>
int main()
{
int z;
int i;
int r;
for( i=1;i<=4;i++)
{
r=1;
for(int j=1;j<=4-i;j++)
{
printf(" ");
}
for(int k=1;k<=i;k++)
{
printf("%d",r++);
}
for(int k=i-1;k>=1;k--)
{
printf("%d",k);
}
printf("\n");
}
return 0;
}
