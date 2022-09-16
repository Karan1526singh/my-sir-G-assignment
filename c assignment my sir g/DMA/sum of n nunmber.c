#include <stdio.h>
int main()
{
    int count;
    int sum=0;
    printf("how many value you want to enter :");
    scanf("%d",&count);
    int *p;
    p=(int *) malloc(count * sizeof(int));
    for(int i=0;i<count;i++)
    {
        scanf("%d",(p+i));
        sum = sum + *(p+i);
    }
    free(p);
    printf("The sum of values is %d",sum);
    return 0;
}


