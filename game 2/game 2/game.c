#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}

}


void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//
	printf("-------扫雷游戏-------\n");
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void Sitmine(char board[ROWS][COLS], int row, int col)
{
	int count = EXSY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}

//统计周围的雷
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] - 8 * '0';
}


void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;  //确定已经排查完

	while (win < ROW*COL - EXSY_COUNT)
	{
	    printf("请输入排查的坐标\n");
	    scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很抱歉，踩到雷了\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			//未踩雷
			else
			{
				int count = get_mine_count(mine, x, y);
				//*返回值为int类型*
				show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}

	}
	if (win == ROW*COL - EXSY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		Displayboard(mine, ROW, COL);
	}

}

//递归方式完善代码--展开


