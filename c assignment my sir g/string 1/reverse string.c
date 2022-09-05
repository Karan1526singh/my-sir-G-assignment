#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter a name :");
    fgets(name,20,stdin);
    strrev(name);
    printf("%s",name);
}

