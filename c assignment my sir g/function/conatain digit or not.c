// Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include <stdio.h>
int check(int n, int digit)
{
    int k;
   for(int i=n;i!=0;i++)
   {
       k=n%10;
       if(k==digit)
       {
          break;
       }
       n=n/10;
   }
    return 1;
}
int main()
{
    int num, digit;
    printf("Enter the two number: ");
    scanf("%d%d", &num, &digit);
    if (check(num, digit))
        printf("it has digit");
    else
        printf("it not contain digit ");
    return 0;
}
