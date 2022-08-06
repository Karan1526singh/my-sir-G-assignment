#include<stdio.h>
int duplicate_array(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
              {
                  count++;
              }
        }
    }
    return count;
}
int main()
{
    int a[10]={1,2,2,3,4,5,6,6,8,8};
    int n=sizeof(a) / sizeof(a[0]);
    printf("number of duplicate value in  array is %d",duplicate_array(a,n));
    return 0;
}

