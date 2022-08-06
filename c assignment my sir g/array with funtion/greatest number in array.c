#include<stdio.h>
int greatest_no(int [], int );
int main()
{
    int arr[10]={3,5,3,6,7,8,5,3,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the greatest number in array is %d",greatest_no(arr,n));
    return 0;
}
int greatest_no(int arr[],int n)
{
    int k;
    for(int i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    return arr[0];
}
