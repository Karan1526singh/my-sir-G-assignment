#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter your name :");
    fgets(name,20,stdin);
    for(int i=0;name[i];i++)
    {
        for(int j=0;j<name[i];j++)
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
    printf("%s",name);
    return 0;
}


