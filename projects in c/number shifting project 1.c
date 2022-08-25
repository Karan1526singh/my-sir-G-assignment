#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
void shifting_number();
int matrix[4][4];
int total_moves=5;
int row,col;
int win_cond(int matrix[][4])
{
    int win = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            win++;
            if (matrix[i][j] != win)
                return 0;
        }
    }
    return 1;
}
int work_key(int arr[][4],char key)
{
    system("cls");
    if (key == 75) // for right
    {
        if (col < 3)
        {
            int temp = arr[row][col];
            arr[row][col] = arr[row][col + 1];
            arr[row][col + 1] = temp;
            col++;
            return 1;
        }
    }
    else if (key == 72) // for down
    {
        if (row < 3)
        {
            int temp = arr[row][col];
            arr[row][col] = arr[row + 1][col];
            arr[row + 1][col] = temp;
            row++;
            return 1;
        }
    }
    else if (key == 80) // for up
    {
        if (row > 0)
        {
            int temp = arr[row][col];
            arr[row][col] = arr[row - 1][col];
            arr[row - 1][col] = temp;
            row--;
            return 1;
        }
    }
    else if (key == 77) // for left
    {
        if (col > 0)
        {
            int temp = arr[row][col];
            arr[row][col] = arr[row][col - 1];
            arr[row][col - 1] = temp;
            col--;
            return 1;
        }
    }
    return 0;
}
//assign 32 in place of 16 because of need of space in matrix
void  taking_one_space_in_matrix()
{
    int i,j,flag=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(matrix[i][j]==16)
            {
                row=i;
                col=j;
                flag=1;
                break;
            }
        }
        if(flag==1)
                break;
    }
    matrix[i][j]=32;
}
void display_matrix()
{
    printf("\nSolve this puzzle matrix \n");
    printf("\n---------------------------\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(matrix[i][j]==32)
            {
                printf("| %3c ",matrix[i][j]);
            }
            else
                printf("| %3d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------");
}
int check_repeat_case(int random_value)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(matrix[i][j]==random_value)
            {
                return 0;
            }
        }
    }
     return 1;
}
void input_number()
{
    int random_value,i,j;
    srand(time(0));
    for(i=0;i<4;i++)
    {
        j=0;
        while(j<4)
        {
            random_value = rand() % 16 + 1;
        if(check_repeat_case(random_value))
        {
            matrix[i][j]=random_value;
            j++;
        }
        }
    }
}
void gamerule()
{
    printf("         RULES OF THIS GAME \n");
    printf("\n 1-> You can move only one at time \n");
    printf("   2-> move up by up arrow key \n");
    printf("   3-> move down by down arrow key \n");
    printf("   3-> move right by right arrow key \n");
    printf("   4-> move left by left arrow key \n");
    printf("   5-> for each valid move : your total number of moves decreased by 1\n");
    printf("\n\n\t\tWINNING SITUATION");
    printf("\n-------------------------\n");
    printf("|  1  |  2  |  3  |  4  |\n");
    printf("|  5  |  6  |  7  |  8  |\n");
    printf("|  9  | 10  | 11  | 12  |\n");
    printf("| 13  | 14  | 15  |     |");
    printf("\n-------------------------\n");
    printf("\n RULE NO.5 - YOU CAN EXIT THE GAME AT ANY TIME BY PRESSING 'E' OR 'e' DOUBLE TIME!");
    printf("\n SO TRY TO WIN THE GAME IN MINIMUM NO. OF MOVE!");
    printf("\n PRESS ANY KEY TO CONTINUE....");
    getch();
}

int main()
{
    char name[30];
    printf("Please enter your name : ");
    gets(name);// here we take input name from user
    gamerule();
    input_number();
    taking_one_space_in_matrix();
    char key;
    fflush(stdin);
    while(1)
    {
        system("cls");
       display_matrix();
       key=getch();
       key=getch();
           if(work_key(matrix,key))
                {
                    total_moves--;
                }
        if(win_cond(matrix))
            {
              printf("you won the game ");
              break;
            }
       if(total_moves==0)
          {
             printf("you loss the game ");
             break;
          }
    }
    printf("\n press any key to exit");
    getch();
    return 0;
}
