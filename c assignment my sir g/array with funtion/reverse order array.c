#include<stdio.h>
int reverse_array(int a[],int n)
{
    printf("\n After reverse array :");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int size;
    printf("Enter how many number you want in array");
    scanf("%d",&size);
    int a[size];
    printf("\n Enter number in array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before reverse array :");
    for(int j=0;j<size;j++)
    {
        printf("%d ",a[j]);
    }
    reverse_array(a,size);
    return 0;
}
