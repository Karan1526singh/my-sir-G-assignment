#include <stdio.h>
void sort(char name[])
{
    for(int i=0;name[i];i++)
    {
        for(int j=0;name[j];j++)
        {
            if(name[i]<name[j])
            {
                char temp;
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
}
int main()
{

    char name[10][100];
    printf("enter ten city name ");
    for(int i=0;i<10;i++)
    fgets(name[i],100,stdin);
   for(int i=0;i<10;i++)
   {
       sort(name[i]);
       printf("%s",name[i]);
   }
}
