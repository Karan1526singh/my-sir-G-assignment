#include<stdio.h>
int unique_array(int a[],int n)
{
    int flag;
    for(int i=0;i<n;i++)
    {
        flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
              {
                 flag=0;
                 break;
              }
        }
        if(flag)
            printf("%d ",a[i]);
    }
}
int main()
{
    int a[10]={1,2,2,3,3,5,6,7,8,9};
    int n=sizeof(a) / sizeof(a[0]);
    unique_array(a,n);
    return 0;
}

