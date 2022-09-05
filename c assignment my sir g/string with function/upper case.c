#include<stdio.h>

void upr(char a[])
{

    for(int i=0;a[i];i++)
    {
        if(a[i]>='a' && a[i]<='z')
        printf("%c",a[i]-32);
    }

}
int main()
{
    char a[20]="karan";
    upr(a);

}


