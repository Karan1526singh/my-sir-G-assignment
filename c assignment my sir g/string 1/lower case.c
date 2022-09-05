#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="KARAN KUMAR SINGH";
    for(int i=0;name[i];i++)
    {
        strlwr(name);
        printf("%c",name[i]);
    }
}

