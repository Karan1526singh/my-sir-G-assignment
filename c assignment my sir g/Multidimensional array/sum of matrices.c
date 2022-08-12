#include <stdio.h>
int main()
{
    int row , coloum , sum=0;
    printf("enter a value of row and coloum :");
    scanf("%d %d",&row,&coloum);
    int matrix[row][coloum];
    printf("enter element of of matrix :");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < coloum; j++)
            scanf("%d", &matrix[i][j]);
    printf("\n sum of row  of matrix ");
    k=coloum;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
                sum=sum + matrix[i][j];
        }
    }
     printf("Given Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    printf("sum of diagonal matrix is :%d",sum);
    return 0;
}

