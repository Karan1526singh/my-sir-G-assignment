#include<stdio.h>
int merge_array(int a[],int b[],int n)
{
    int c[2*n];
    int k;
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<2*n;i++)
    {
        c[n+i]=b[i];
    }
    printf("sorted merge array :");
    for(int i=1;i<2*n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(c[i]<c[j])
              {
                 k=c[i];
                 c[i]=c[j];
                 c[j]=k;
              }
        }
    }
    for(int i=0;i<2*n;i++)
    {
        printf("%d ",c[i]);
    }
}
int main()
{
    int n;
    printf("enter how many number you want in array :\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter element of first array :\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element of second array :\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    merge_array(a,b,n);
    return 0;
}


