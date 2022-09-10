#include<stdio.h>
int length(char *p)
{
    int i;
    for( i=0;*(p+i);i++);
    return (i-1);
}
int main()
{
    char name[100];
    int l;
    printf("enter name ");
    fgets(name,100,stdin);
    l = length(name);
    printf("size of string is %d",l);
}
