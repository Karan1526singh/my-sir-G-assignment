#include<stdio.h>

void len(char a[])
{
    int count =0 ;
    for(int i=0;a[i];i++)
    {
        count++;
    }
    printf("length of string is %d",count);
}
int main()
{
    char a[20]="karan singh";
    len(a);

}
