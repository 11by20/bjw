#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h> 

//判断两数字二进制数不同数字的个数
int differnece(int m, int  n)
{
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
    int count= differnece(m, n);
	printf("count=%d\n", count);
	return 0;
}

////获取一个数字二进制数中1的个数
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		if (1 == n % 2)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one( int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

////最优解
////n=3
////11  n
////10  n-1
////n&(n-1)
////10  n
////01 n-1
////n&(n-1)
////n=0
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}


////交换两数组元素
//void Exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
////打印数组元素
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//}
//
//
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Exchange(arr1, arr2, sz);
//	print(arr1,sz);
//	print(arr2,sz);
//	return 0;
//}