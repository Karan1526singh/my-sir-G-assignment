#include <stdio.h>
int main()
{
    int row,coloum;
    printf("Enter Row of Matrix: ");
    scanf("%d%d", &row,&coloum);

    int matrix[row][coloum];
    printf("Enter Element in %d*%d Matrix: \n", row, row);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < coloum; j++)
            scanf("%d", &matrix[i][j]);

    // print Matrix
    printf("Given Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // print Lower triangular Matrix
    printf("upper triangular Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = coloum - i -1; j < coloum; j++)
        {
            if(j >= coloum - i -1)
            printf("%d ", matrix[i][j]);

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
