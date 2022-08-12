#include <stdio.h>
int main()
{
    int row , coloum ;
    printf("enter a value of row and coloum :");
    scanf("%d %d",&row,&coloum);
    int transpose[row][coloum];
    printf("enter element of of matrix :");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < coloum; j++)
            scanf("%d", &transpose[i][j]);
    printf("\n transpose of matrix ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ", transpose[j][i]);
        }
            printf("\n");
    }
    return 0;
}

