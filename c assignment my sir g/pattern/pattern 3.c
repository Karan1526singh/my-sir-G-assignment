/*
*****
****
***
**
*
*/
#include <stdio.h>
int main()
{
int i;
for( i=1;i<=5;i++)
{
for(int j=1;j<=i-1;j++)
{
printf(" ");
}
for(int k=1;k<=6-i;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}

