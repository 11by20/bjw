#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>



int main()
{
	//���ϸ�ֵ��
	int a = 1;
	a += 3;
	a >>= 1;
	printf("%d\n", a);
	return  0;
}



////��һ�������ڶ�������һ�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//32bit
//	//num%1==1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ( 1== ((num>>i) & 1))
//			count++;
//	}
//
//
//	////ͳ��num�Ĳ������м���1
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//
//	//}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	//��λ���ķ���
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	////�Ӽ����������ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	////������
//	//a = a + b;
//	//b = a - b;
//	//a = (a - b) / 2;
//	//b = a + b;
//	printf("%d %d\n", a, b);
//}


//
//int main()
//{
//	int a = -1;
//	printf("%d\n", a);
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}