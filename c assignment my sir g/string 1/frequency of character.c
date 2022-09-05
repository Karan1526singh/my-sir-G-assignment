#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter your name :");
    gets(name);
    for(int i=0;name[i];i++)
    {
        for(int j=0;name[j];j++)
        {
            if(name[i]<name[j])
            {
               int temp;
               temp=name[i];
               name[i]=name[j];
               name[j]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;name[i];i++)
    {
        for(int j=i+1;name[j];j++)
        {
            if(name[i]==name[j])
            {
                count++;
            }
            else
                break;
        }
        printf("\n The frequecy of character %c is %d ",name[i],count);
    }
    return 0;
}



