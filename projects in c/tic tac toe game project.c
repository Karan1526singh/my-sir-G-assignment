#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int matrix[3][3];
char player1 = 'x';
char player2 = 'o';
void play_with_freind();
int win_condition();
void createMatrix()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count++;
            matrix[i][j] = count;
        }
    }
}

void displayMatrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'x' || matrix[i][j] == 'o')
                printf("|%c ", matrix[i][j]);
            else
                printf("|%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void input_marking_place1(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == n)
            {
                matrix[i][j] = 'x';
            }
        }
    }
}
void input_marking_place2(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (matrix[i][j] == n)
            {
                matrix[i][j] = 'o';
            }
        }
    }
}
int win_condition()
{
    if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2] || matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2] || matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2] || matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0] || matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1] || matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2] || matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] || matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    {
        return 1;
    }
    return 0;
}
void printmarkingplace(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == n)
            {
                printf("%c", matrix[i][j]);
            }
        }
    }
}
int check1(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == n)
            {
                return 1;
            }
        }
    }
    return 0;
}
int check2(int n)
{
    if (n > 0 && n <= 9)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] == n)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
void play_with_freind()
{
    system("cls");
    int win = 0;
    createMatrix();
    while (1)
    {
        int n;
        while (1)
        {
            system("cls");
            displayMatrix();
            printf("player1 ,enter marking place :");
            scanf("%d", &n);
            if (check1(n))
            {
                input_marking_place1(n);
                system("cls");
                displayMatrix();
                win++;
                if (win_condition())
                {
                    printf("player1 won :");
                    exit(0);
                }
                if (win == 9)
                {
                    printf(" draw ");
                    exit(0);
                }

                break;
            }
            else
            {
                printf("please enter right vlaue \n ");
                getch();
            }
        }
        while (1)
        {
            system("cls");
            displayMatrix();
            printf("player2 ,enter marking place \n :");
            scanf("%d", &n);
            if (check2(n))
            {
                input_marking_place2(n);
                system("cls");
                displayMatrix();
                win++;

                if (win_condition())
                {
                    printf("player2 won :");
                    exit(0);
                }

                break;
            }
            else
            {
                printf("please enter right vlaue \n ");
                getch();
            }
        }
    }
}

void creatematrix()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count++;
            matrix[i][j] = count;
        }
    }
}
void displaymatrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'x' || matrix[i][j] == 'o')
                printf("%c ", matrix[i][j]);
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void input_markingplace(int markingplace1)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == markingplace1)
            {
                matrix[i][j] = 'x';
            }
        }
    }
}
void input_markingplace2(int markingplace2)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == markingplace2)
            {
                matrix[i][j] = 'o';
            }
        }
    }
}
int check(int markingplace2)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == markingplace2)
            {
                return 1;
            }
        }
    }
    return 0;
}
int checking_win_condition(markingplace2)
{
    if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && markingplace2 == 3)
        return 1;
    else if (matrix[0][0] == 'x' && matrix[0][2] == 'x' && markingplace2 == 2)
        return 1;

    else if (matrix[0][1] == 'x' && matrix[0][2] == 'x' && markingplace2 == 1)
        return 1;

    else if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && markingplace2 == 6)
        return 1;
    else if (matrix[1][0] == 'x' && matrix[1][2] == 'x' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'x' && matrix[1][2] == 'x' && markingplace2 == 4)
        return 1;

    else if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && markingplace2 == 9)
        return 1;
    else if (matrix[2][0] == 'x' && matrix[2][2] == 'x' && markingplace2 == 8)
        return 1;
    else if (matrix[2][1] == 'x' && matrix[2][2] == 'x' && markingplace2 == 7)
        return 1;

    else if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && markingplace2 == 7)
        return 1;
    else if (matrix[0][0] == 'x' && matrix[2][0] == 'x' && markingplace2 == 4)
        return 1;
    else if (matrix[1][0] == 'x' && matrix[2][0] == 'x' && markingplace2 == 1)
        return 1;

    else if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && markingplace2 == 8)
        return 1;
    else if (matrix[0][1] == 'x' && matrix[2][1] == 'x' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'x' && matrix[2][1] == 'x' && markingplace2 == 2)
        return 1;

    else if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && markingplace2 == 9)
        return 1;
    else if (matrix[0][2] == 'x' && matrix[2][2] == 'x' && markingplace2 == 6)
        return 1;
    else if (matrix[1][2] == 'x' && matrix[2][2] == 'x' && markingplace2 == 3)
        return 1;

    else if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && markingplace2 == 9)
        return 1;
    else if (matrix[0][0] == 'x' && matrix[2][2] == 'x' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'x' && matrix[2][2] == 'x' && markingplace2 == 1)
        return 1;

    else if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && markingplace2 == 7)
        return 1;
    else if (matrix[0][2] == 'x' && matrix[2][0] == 'x' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'x' && matrix[2][0] == 'x' && markingplace2 == 3)
        return 1;

    else if (matrix[0][0] == 'o' && matrix[0][1] == '0' && markingplace2 == 3)
        return 1;
    else if (matrix[0][0] == 'o' && matrix[0][2] == 'o' && markingplace2 == 2)
        return 1;
    else if (matrix[0][1] == 'o' && matrix[0][2] == 'o' && markingplace2 == 1)
        return 1;

    else if (matrix[1][0] == 'o' && matrix[1][1] == 'o' && markingplace2 == 6)
        return 1;
    else if (matrix[1][0] == 'o' && matrix[1][2] == 'o' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'o' && matrix[1][2] == 'o' && markingplace2 == 4)
        return 1;

    else if (matrix[2][0] == 'o' && matrix[2][1] == 'o' && markingplace2 == 9)
        return 1;
    else if (matrix[2][0] == 'o' && matrix[2][2] == '0' && markingplace2 == 8)
        return 1;
    else if (matrix[2][1] == 'o' && matrix[2][2] == 'o' && markingplace2 == 7)
        return 1;

    else if (matrix[0][0] == 'o' && matrix[1][0] == 'o' && markingplace2 == 7)
        return 1;
    else if (matrix[0][0] == 'o' && matrix[2][0] == 'o' && markingplace2 == 4)
        return 1;
    else if (matrix[1][0] == 'o' && matrix[2][0] == 'o' && markingplace2 == 1)
        return 1;

    else if (matrix[0][1] == 'o' && matrix[1][1] == 'o' && markingplace2 == 8)
        return 1;
    else if (matrix[0][1] == 'o' && matrix[2][1] == 'o' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'o' && matrix[2][1] == 'o' && markingplace2 == 2)
        return 1;

    else if (matrix[0][2] == 'o' && matrix[1][2] == 'o' && markingplace2 == 9)
        return 1;
    else if (matrix[0][2] == 'o' && matrix[2][2] == 'o' && markingplace2 == 6)
        return 1;
    else if (matrix[1][2] == 'o' && matrix[2][2] == 'o' && markingplace2 == 3)
        return 1;

    else if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && markingplace2 == 9)
        return 1;
    else if (matrix[0][0] == 'o' && matrix[2][2] == 'o' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'o' && matrix[2][2] == 'o' && markingplace2 == 1)
        return 1;

    else if (matrix[0][2] == 'o' && matrix[1][1] == 'o' && markingplace2 == 7)
        return 1;
    else if (matrix[0][2] == 'o' && matrix[2][0] == 'o' && markingplace2 == 5)
        return 1;
    else if (matrix[1][1] == 'o' && matrix[2][0] == 'o' && markingplace2 == 3)
        return 1;
    else
        return 0;
}
int win_condition_comp()
{
    if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2] || matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2] || matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2] || matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0] || matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1] || matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2] || matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] || matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    {
        return 1;
    }
    return 0;
}
void play_with_smart_computer()
{
  system("cls");
    creatematrix();
    displaymatrix();
    int markingplace1;
    int count = 0;
    int win = 0;

    while (1)
    {
        while (1)
        {
            system("cls");
            displaymatrix();
            printf("enter marking place \n");
            scanf("%d", &markingplace1);
            if (check(markingplace1))
            {
                system("cls");
                displaymatrix();
                input_markingplace(markingplace1);
                displaymatrix();

                if (win_condition_comp())
                {
                    printf("you won");
                    exit(0);
                }
                win++;
                if (win == 9)
                {
                    printf(" draw ");
                    exit(0);
                }
                break;
            }
            else
                printf("please enter right \n");
            getch();
        }
        int markingplace2;
        count++;
        while (1)
        {
            system("cls");
            srand(time(0));
            markingplace2 = rand() % 9 + 1;

            if (count >= 2)
            {

                if (checking_win_condition(markingplace2))
                {

                    if (check(markingplace2))
                    {
                        system("cls");
                        displaymatrix();
                        input_markingplace2(markingplace2);
                        displaymatrix();
                        win++;
                        if (win_condition_comp())
                        {
                            printf("computer won ");
                            exit(0);
                        }
                        break;
                    }
                }
            }
            else
            {
                if (check(markingplace2))
                {

                    input_markingplace2(markingplace2);
                    displaymatrix();
                    break;
                }
            }
        }
    }
}

int main()
{
    system("cls");

    printf("                  WELCOME TO TIC TAC TOE");
    printf("\nEnter 1 if you want play with smart computer ");
    printf("\nEnter 3 if you want to play with friend  ");
    printf("\nEnter 4 if you want to exit  ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 3:
        play_with_freind();
        break;
    case 1:
        play_with_smart_computer();
        break;
    case 4:
        exit(0);
    }
}
