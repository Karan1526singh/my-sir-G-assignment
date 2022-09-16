#include <stdio.h>
int main()
{
    int count;
    int max = -1;
    int min= __INT_MAX__;
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
        if(*(p+i)>max)
            max=*(p+i);
         if(*(p+i)<min)
            min=*(p+i);
    }
    printf("the maximum  value is %d and minimum value is %d",max, min);
    return 0;
}




