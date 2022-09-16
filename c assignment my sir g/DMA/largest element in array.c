#include <stdio.h>
int main()
{
    int count;
    int temp = -1;
    printf("how many value you want to enter in array  :");
    scanf("%d",&count);
    int *p;
    p=(int *) malloc(count * sizeof(int));
    for(int i=0;i<count;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<count;i++)
    {
        if(*(p+i)>temp)
            temp=*(p+i);
    }
    printf("the largest value is %d",temp);
    return 0;
}



