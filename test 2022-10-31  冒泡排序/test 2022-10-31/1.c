#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[] = { 1, 2 };
//	int sz= sizeof(arr) / sizeof(arr[0]);
//
//	//1��sizeof(��������-- ��������ʾ�������飬�����������������Ĵ�С
//	//2��&����������������ʾ�������飬ȡ��������������ĵ�ַ
//	//3�������������������������Ԫ�ص�ַ
//	printf("%p \n", arr);
//	printf("%p \n", &arr[0]);
//	printf("%d \n", *arr);
//
//	printf("%p \n", arr);
//	printf("%p \n", arr + 1);
//
//	printf("%p \n",&arr);
//	printf("%p \n",&arr + 1);
//
//	printf("%p \n", &arr[0]);
//	printf("%p \n", &arr[0] + 1);
//	return 0;
//}


void bubble_sort(int* arr ,int sz)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int s = 0;
	 //������һ��Ҫ���е������Ѿ�����
	for (i = 0; i < sz; i++)  //ȷ���������
	{
		int flag = 1;
		//for (j = 0, s = sz; j <sz - 1; j++, s--)   //ÿһ��ð������
		for (j = 0; j <sz - i- 1; j++ )  //ÿһ��ð������
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 0;  //�������е����鲻��ȫ����
			}
		}
		if (flag == 1)   // �������е������Ѿ�����
		{
			break;
		}
	}

}
int main()
{
	int i = 0;
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ð������
	bubble_sort(arr,sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
		return 0;
}