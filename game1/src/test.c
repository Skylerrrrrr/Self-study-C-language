//test三子棋游戏
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****1.PLAY  0.Exit*******\n");
	printf("**************************\n");
}

//for游戏的整个实现
void game()
{
	//数组 - 存放走出的棋盘信息
	char board[ROW][COL] = {0};
	
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误,请重新选择!\n");
				break;
		}

	}while (input);
}
int main()
{
	test();
	return 0;
}