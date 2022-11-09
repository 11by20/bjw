#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("输入我是猪，否则你的电脑将会在一分钟内关机\n");
		scanf("%s", &input);

		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}


	return 0;
}



//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("输入我是猪，否则你的电脑将会在一分钟内关机\n");
//	scanf("%s", &input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//int main()
//{
//again:
//	printf("hallo world\n");
//	goto again;
//	return 0;
//}