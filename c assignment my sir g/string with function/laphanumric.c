#include<stdio.h>

int alphanumeric(char a[])
{
    int count=0;
    int countt=0;
    for(int i=0;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            count++;
        else if(a[i]>=0 && a[i]<=9)
            countt++;
        if(count && countt)
        return 1;
    }
    return 0;

}
int main()
{
    char a[20]="karan01";
    if(alphanumeric(a))
        printf("alphanumeric ");
    else
        printf("not alphanumeric");

}



