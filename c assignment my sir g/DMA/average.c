#include <stdio.h>
int main()
{
    int count;
    int avg;
    int sum=0;
    printf("enter how many number you want in array :");
    scanf("%d",&count);
    int *p;
    p=(int *) malloc(count * sizeof(int));
    for(int i=0;i<count;i++)
    {
        scanf("%d",(p+i));
        sum = sum + *(p+i);
    }
    avg=sum/count;
    printf("The average is %d",avg);
    return 0;
}

