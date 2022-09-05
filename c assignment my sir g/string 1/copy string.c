#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    char copyname[20]={0};
    printf("enter your name ");
    fgets(name,20,stdin);
    strcpy(copyname,name);
    printf(" %s",copyname);
    return 0;
}


