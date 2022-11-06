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
	printf("-------ɨ����Ϸ-------\n");
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
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

//ͳ����Χ����
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
	int win = 0;  //ȷ���Ѿ��Ų���

	while (win < ROW*COL - EXSY_COUNT)
	{
	    printf("�������Ų������\n");
	    scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			//����
			if (mine[x][y] == '1')
			{
				printf("�ܱ�Ǹ���ȵ�����\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			//δ����
			else
			{
				int count = get_mine_count(mine, x, y);
				//*����ֵΪint����*
				show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}

	}
	if (win == ROW*COL - EXSY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(mine, ROW, COL);
	}

}

//�ݹ鷽ʽ���ƴ���--չ��


