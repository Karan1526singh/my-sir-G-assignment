#include<stdio.h>

void len(char a[],int l)
{
    int count =0 ;
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }

}
int main()
{
    char a[20]="karan singh";
    int l;
    l=strlen(a);
    len(a,l);

}

