#define _CRT_SECURE_NO_DEPRECATE 1
#include "game.h"
//������������Ϸ

void menu()
{
	printf("********************************************\n");
	printf("*********   1 play         0 exit  *********\n");
	printf("********************************************\n");
}


//��Ϸ�������㷨ʵ��
void game()
{
	//�������飬��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
		//��ӡ���� 
		//   |   |   
		//---|---|---
		//   |   |   
		//---|---|---
		//   |   |   
	Dispalyboard(board, ROW, COL);
	//����
	char ret = '0';
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
	
	Dispalyboard(board, ROW, COL);

}


void test()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}


int main()
{
	test();

	return 0;
}