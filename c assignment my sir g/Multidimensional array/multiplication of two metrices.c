#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], productMatrix[3][3]={0};
    printf("Enter Element in First 3*3 Matrix: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Element in Second 3*3 Matrix: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);


    for ( int i = 0; i < 3; i++)
        for (int j = 0 ; j < 3; j++)
            for(int k = 0 ; k < 3 ; k++)
            productMatrix[i][j] += a[i][k] * b[k][j];
    // print product Of Upper Two Matrix
    printf("product of Two a Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", productMatrix[i][j]);
        printf("\n");
    }
    return 0;
}
