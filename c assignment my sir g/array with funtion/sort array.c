#include<stdio.h>
int sorted_array(int [],int );
int main()
{
    int arr[10]={3,5,3,6,7,8,5,3,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorted_array(arr,n);
    return 0;
}
int sorted_array(int arr[],int n)
{
    int k;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
              {
                 k=arr[i];
                 arr[i]=arr[j];
                 arr[j]=k;
              }
        }
    }
    printf("sorted array are :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
