#define _CRT_SECURE_NO_DEPRECATE 1
#include "game.h"
//测试三子棋游戏

void menu()
{
	printf("********************************************\n");
	printf("*********   1 play         0 exit  *********\n");
	printf("********************************************\n");
}


//游戏的整个算法实现
void game()
{
	//创建数组，放置棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
		//打印棋盘 
		//   |   |   
		//---|---|---
		//   |   |   
		//---|---|---
		//   |   |   
	Dispalyboard(board, ROW, COL);
	//下棋
	char ret = '0';
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		//判断玩家是否赢
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		//判断电脑是否赢
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	printf("%c\n", ret);
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
	
	Dispalyboard(board, ROW, COL);

}


void test()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}


int main()
{
	test();

	return 0;
}