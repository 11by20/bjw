#define _CRT_SECURE_NO_DEPRECATE 1
#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("*************  1 ,play ************\n");
	printf("*************  0 ,exit ************\n");
	printf("***********************************\n");
}

void game()
{
	//存放雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	Sitmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//扫雷
	Findmine(mine,show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
	    case 1:
		{
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

