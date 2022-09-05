#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int count_char=0,count_number=0,count_spec=0;
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        if((name[i]>='a' && name[i]<='z')   || (name[i]>='A' && name[i]<='Z'))
        {
            count_char++;
        }
        else if(name[i]>='0' && name[i]<='9')
        {
            count_number++;
        }
        else
            count_spec++;
    }
    printf("total number of character %d \n total number of number %d and special character is %d",count_char,count_number,count_spec);
    return 0;
}

