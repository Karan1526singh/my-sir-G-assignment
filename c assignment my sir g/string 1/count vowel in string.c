#include<stdio.h>
int main()
{
    char name[20]="karan kumar singh";
    int count=0;
    for(int i=0;name[i]!=NULL;i++)
    {
        if(name[i] == 'a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            count ++;
        }
    }
    printf("total number of vowel is %d",count);
}
