#include<stdio.h>
void count(char *p)
{
    int i;
    int count=0,countt=0;
    for( i=0;*(p+i);i++)
    {
        if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
            count++;
        else
            countt++;
    }
    printf("total number of vowel is %d and number of consonent is %d",count,countt);
}
int main()
{
    char name[100];
    int l;
    printf("enter name ");
    fgets(name,100,stdin);
    count(name);
}

