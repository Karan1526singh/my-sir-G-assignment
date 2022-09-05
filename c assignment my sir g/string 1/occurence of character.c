#include<stdio.h>
int main()
{
    char name[20]="karan kumar singh";
    char c;
    int count = 0;
    printf("enter charcter :");
    scanf("%c",&c);
    for(int i=0;name[i];i++)
    {
        if(name[i]==c)
            count++;
    }
    printf("occurence of charcter is %d",count);
}
