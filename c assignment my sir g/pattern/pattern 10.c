/*
12344321
123 321
12   21
1     1
*/
#include <stdio.h>
int main()
{
int z;
int i;
int r;
for( i=1;i<=5;i++)
{
r=1;
for(int k=1;k<=5-i;k++)
{
printf("%d",r++);
}
for(int j=1;j<=i-1;j++)
{
printf(" ");
}
for(int k=1;k<=i-1;k++)
{
printf(" ");
}
for(int k=5-i;k>=1;k--)
{
printf("%d",k);
}
printf("\n");
}
return 0;
}
