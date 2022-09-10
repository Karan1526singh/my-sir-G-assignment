#include<stdio.h>
void reverse(char *p,int size)
{
    int i;
    for( i=size-1;i>=0;i--)
    {
        printf("%c",*(p+i));
    }
}
int main()
{
    char name[100];
    int l;
    l=strlen(name);
    printf("enter name ");
    fgets(name,100,stdin);
    reverse(name,l);
}


