#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="karan kumar singh";
    for(int i=0;name[i];i++)
    {
        strupr(name);
        printf("%c",name[i]);
    }
}
