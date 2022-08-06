#include<stdio.h>
int frequency_array(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count =0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        printf("\n the frequency of %d element is %d",a[i],count);
    }
}
int main()
{
    int n;
    printf("enter how many number you want in array :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter element of first array :\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    frequency_array(a,n);
    return 0;
}


