#include<stdio.h>
int duplicate_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
              {
                  return a[i];
                  break;
              }
        }
    }
}
int main()
{
    int a[10]={1,2,2,3,4,5,6,7,8,9};
    int n=sizeof(a) / sizeof(a[0]);
    printf("adjcent value of duplicate array is %d",duplicate_array(a,n));
    return 0;
}
