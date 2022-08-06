/*
**********
**** ****
***  ***
**   **
*    *
    */
#include <stdio.h>
int main()
{
int i;
for( i=1;i<=5;i++)
{
for(int j=1;j<=6-i;j++)
{
printf("*");
}
for(int r=1;r<=i-1;r++)
{
printf(" ");
}
for(int r=1;r<=i-1;r++)
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
