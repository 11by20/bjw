#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define RAND_MAX 0x7fff


void menu()
{
	printf("��������Ϸ\n");
	printf("*****************************************\n");
	printf("****       1,play         0,exit     ****\n");
	printf("*****************************************\n");
}
//RAND_MAX

void game()
{
	//printf("������\n");
	//����һ�������
	int ret = 0;
	int i = 0;
	//��ʱ�������������������
	//time_t
	//ʱ���
	ret = rand()%100+1;//1��100����
	//printf("%d\n", ret);
	while(1)
	{
		printf("�������:>\n");
		scanf ("%d", &i);
		if (i > ret)
		{
			printf("����\n");
		}
		else if (i<ret)
		{
			printf("С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;	
		}
	}

}


int main()
{
	int i = 1;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (i);
	return 0;
}


//void menu()
//{
//	printf("******************************************\n");
//	printf("****          1,play        0,exit   *****\n");
//	printf("******************************************\n");
//}
//
//void game()
//{
//	printf("������\n");
//
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		menu();
//		printf("��ѡ��>:\n");
//		*scanf("%d\n", &i);*
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	}while (i);
//	return 0;
//}


//��ӡ�˷��ھ�
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ",j,i,i*j);
//		printf("\n");
//	}
//	return  0;
//}

//ȡʮ�������е����ֵ
//int main()
//{
//	int i = 0;
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int max = a[1];
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	printf("������ʮ������\n");
//	for (i = 0; i <sz; i++)
//	{
//		scanf("%d", &a[i]);
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i]>max)
//		{
//			max = a[i];
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}


//����1/1-1/2+1/3-.....1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//Ѱ��100���ڴ���9������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			printf("%d\n", i);
//		if (i / 10 == 9)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//Ѱ��100��200������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i<=200; i++ )
//	{
//		
//		for (j = 2; j<= sqrt(i);j++)
//		{
//			if (i%j==0)
//			{
//				break ;
//			}
//		}
//		if (j> sqrt (i))
//		{
//			printf("%d   ", i);
//		}
//	
//	}
//	return 0;
//}



//���鶨��
//int main()
//{
//	int a[15] = { [2] = 3, [5] = 7, [14] = 9 };
//	printf("%d\n", a[2]);
//
//	return 0;
//}