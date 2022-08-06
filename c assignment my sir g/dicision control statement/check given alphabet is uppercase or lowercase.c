//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
char a;
printf("enter a character ");
scanf("%c",&a);
if(a>='A' && a<='Z')
{
printf("This is upper case of character ");
}
else
printf(" this is lower case ");
return 0;
}
