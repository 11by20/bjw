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
	//����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	Sitmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//ɨ��
	Findmine(mine,show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
	    case 1:
		{
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

