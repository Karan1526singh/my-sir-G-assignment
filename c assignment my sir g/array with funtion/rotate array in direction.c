#include<stdio.h>
int rotate_array(int [],int, int );
int main()
{
    int arr[8]={3,5,12,14,15,45,67,13},k;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter a value to start rotate array ");
    scanf("%d",&k);
    rotate_array(arr,n,k);
    return 0;
}
int rotate_array(int arr[],int n,int k)
{
    int d;
    printf("\n Enter 1 for left rotation or 0 for right rotation ");
    scanf("%d",&d);
    if(d==1)
    {
        for(int i=k;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        for(int j=0;j<k;j++)
            {
                printf("%d ",arr[j]);
            }
    }
    else if(d==0)
    {
          for(int i=n-k;i<n;i++)
             {
                 printf("%d ",arr[i]);
             }
         for(int j=0;j<n-k;j++)
            {
                 printf("%d ",arr[j]);
            }
    }
    else
        printf("you enter wrong value . exit program :");
}
