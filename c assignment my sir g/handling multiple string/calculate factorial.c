
#include <stdio.h>
#include <string.h>

void factorial()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    printf("Factorial is: %d", fact);
}

int main()
{
    int n;
    printf("\n enter how many number of string you want in array :");
    scanf("%d",&n);
    char name[n][100];
    fflush(stdin);
    printf("\n enter %d string ",n);
    for(int i=0;i<n;i++)
        fgets(name[i],100,stdin);
        char search[100];
        printf("\n enter string you want to search ");
        fgets(search,100,stdin);
        int flag=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(name[i],search)==0)
           flag=1;

           break;
    }
    if(flag)
    {
         printf("\n we get the name now you calculate factorial ");
        factorial();
    }
    else
        printf("error ");
    return 0;
}
