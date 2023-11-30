#include "game.h"

void menu()
{
    printf("********************\n");
    printf("***1.play  0.exit***\n");
    printf("********************\n");
}

void game()
{
    char board[ROW][COL] = {0};

    // 初始化棋盘
     InitBoard(board, ROW, COL);
    //DisplayBoard(board, ROW, COL);
}

int main()
{
    int input = 0;
    do
    {
        menu(); // 打印菜单
        printf("please switch:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("exit game\n");
            break;
        default:
            printf("sorry error\n");
            break;
        }
    } while (input);
    
    return 0;
}