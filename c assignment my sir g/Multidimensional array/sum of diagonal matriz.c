#include <stdio.h>
int main()
{
    int row , coloum , sum=0;
    printf("enter a value of row and coloum :");
    scanf("%d %d",&row,&coloum);
    int diagonal[row][coloum];
    printf("enter element of of matrix :");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < coloum; j++)
            scanf("%d", &diagonal[i][j]);
    printf("\n sum of diagonal  of matrix ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            if(i==j)
                sum=sum + diagonal[i][j];
        }
    }
     printf("Given Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", diagonal[i][j]);
        printf("\n");
    }
    printf("sum of diagonal matrix is :%d",sum);
    return 0;
}

