/*
*********
 *******
  *****
   ***
    *
    */
#include <stdio.h>
int main()
{
int i,j;
for( i=1;i<=5;i++)
{
for( j=1;j<=i-1;j++)
{
printf(" ");
}
for(int k=1;k<=9-(2*i)+2;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}
