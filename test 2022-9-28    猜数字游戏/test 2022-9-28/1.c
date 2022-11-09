#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define RAND_MAX 0x7fff


void menu()
{
	printf("猜数字游戏\n");
	printf("*****************************************\n");
	printf("****       1,play         0,exit     ****\n");
	printf("*****************************************\n");
}
//RAND_MAX

void game()
{
	//printf("猜数字\n");
	//生成一个随机数
	int ret = 0;
	int i = 0;
	//用时间戳设置随机数生成起点
	//time_t
	//时间戳
	ret = rand()%100+1;//1到100的数
	//printf("%d\n", ret);
	while(1)
	{
		printf("请猜数字:>\n");
		scanf ("%d", &i);
		if (i > ret)
		{
			printf("大了\n");
		}
		else if (i<ret)
		{
			printf("小了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请选择>:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
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
//	printf("猜数字\n");
//
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		menu();
//		printf("请选择>:\n");
//		*scanf("%d\n", &i);*
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	}while (i);
//	return 0;
//}


//打印乘法口诀
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

//取十个数字中的最大值
//int main()
//{
//	int i = 0;
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int max = a[1];
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	printf("请输入十个数字\n");
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


//计算1/1-1/2+1/3-.....1/99-1/100
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


//寻找100以内带有9的数字
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

//寻找100到200的素数
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



//数组定义
//int main()
//{
//	int a[15] = { [2] = 3, [5] = 7, [14] = 9 };
//	printf("%d\n", a[2]);
//
//	return 0;
//}