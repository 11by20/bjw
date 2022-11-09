#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[] = { 1, 2 };
//	int sz= sizeof(arr) / sizeof(arr[0]);
//
//	//1，sizeof(数组名）-- 数组名表示整个数组，计算出的是整个数组的大小
//	//2，&数组名，数组名表示整个数组，取出的是整个数组的地址
//	//3，其余情况数组名代表数组首元素地址
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
	 //假设这一趟要排列的数列已经有序
	for (i = 0; i < sz; i++)  //确定排序次数
	{
		int flag = 1;
		//for (j = 0, s = sz; j <sz - 1; j++, s--)   //每一趟冒泡排序
		for (j = 0; j <sz - i- 1; j++ )  //每一趟冒泡排序
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 0;  //本趟排列的数组不完全有序
			}
		}
		if (flag == 1)   // 本躺排列的数列已经有序
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
	//冒泡排序
	bubble_sort(arr,sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
		return 0;
}