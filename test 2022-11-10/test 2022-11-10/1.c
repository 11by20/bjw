#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h> 

//ָ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]) );
	}

	return 0;
}


//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	int* * ppa = &pa; //����ָ��
//
//	printf("%d\n", **ppa);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr);  //&arrΪ���������ַ
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}


////��ĩ��ָ���ȥ��ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}


////�õݹ�ķ���
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

//��ͨ����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ���ǵ�һ��Ԫ�ص��׵�ַ
//	printf("len = %d\n", len);
//
//	return 0;
//}


//int main()
//{
//	int a = 0X11223344;
//
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa); //��ȫ������
//	printf("%p\n", pc); //ֻ�ܷ���һ���ֽ�
//	return 0;
//}