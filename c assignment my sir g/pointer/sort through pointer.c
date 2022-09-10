#include<stdio.h>
void sorted(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(p+i) < *(p+j))
            {
                int temp;
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }

        }
    }
}
int main()
{
    int a[10]={5,4,3,2,1,9,8,7,6,10};
    int n;
    n=sizeof(a) / sizeof a[0];
    sorted(a,n);
    printf("\nAfter Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
