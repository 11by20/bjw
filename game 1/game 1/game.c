#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//��ӡ���� 
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void Dispalyboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡһ������
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
	
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				//��ӡ�ָ���	
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}

		     }
			printf("\n");
		}

	}

}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������:>\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
			break;
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	} 

}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//����û��
			}
		}
	}

	return 1;//��������
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	//�жϺ�����
	for (i = 0; i < row ;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	
	}
	//�ж�������
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//�ж���б��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//�ж��Ƿ�ƽ��
	ret = IsFull(board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}





//void Dispalyboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡһ������
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//��ӡ�ָ���
//		
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//
//}