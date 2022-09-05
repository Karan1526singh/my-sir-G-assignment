#include<stdio.h>

int palindrome(char a[],int s)
{
    for(int i=0;a[i];i++)
    {
        if(a[i]!=a[s])
        {

            return 0;
        }
        s--;
    }
    return 1;

}
int main()
{
    char a[20]="leve";
    int l;
    l=strlen(a);
    if(palindrome(a,l-1))
        printf("palindrome  ");
    else
        printf("not palindrome");

}




