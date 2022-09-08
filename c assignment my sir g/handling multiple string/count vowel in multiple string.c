#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][100];
    printf("enter names :");
    for(int i=0;i<5;i++)
        fgets(str[i],100,stdin);
         int count;
    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; str[i][j]; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' || str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
                count++;
        }
        printf("\n%d string conatin %d vowel", i + 1, count);
    }
}
