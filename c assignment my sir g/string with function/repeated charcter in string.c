#include<stdio.h>
void sort(char a[])
{
    for (int i = 0; a[i]; i++)
    {
        for (int j = 0; a[j]; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void repeated(char a[])
{
 sort(a);
    for(int i=0;a[i];i++)
    {
        for(int j=i+1;a[j];j++)
       {

           if(a[i]==a[j])
             printf("repeated character in string is %c ",a[i]);
       }
    }


}
int main()
{
    char a[20]="karana";
    repeated(a);
}




