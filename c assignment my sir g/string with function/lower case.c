#include<stdio.h>

void low(char a[])
{

    for(int i=0;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        printf("%c",a[i]+32);
    }

}
int main()
{
    char a[20]="KARAN";
    low(a);

}


