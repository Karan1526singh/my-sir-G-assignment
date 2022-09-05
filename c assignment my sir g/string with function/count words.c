#include<stdio.h>

void count(char a[])
{
    int count=0;
    for(int i=0;a[i];i++)
    {
        count++;
    }
    printf("The total number or words is %d",count);

}
int main()
{
    char a[20]="karan";
    count(a);

}




