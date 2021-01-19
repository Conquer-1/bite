#define _CRT_SECURE_NO_WARNINGS
//时间戳：当前时间和计算机的起始时间之间的差值，单位是秒
//计算机的起始时间：1970.01.01 8:00

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}
//游戏开始
void game()
{
	//生成1-100的随机数
	int ret = rand() % 100 + 1;
	//猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	//只设置一次起点
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
////
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在arr这个有序数组中查找一个数字k
//	int k = 0;
//	//sizeof(arr)-计算的是数组的总大小，单位是字节-40
//	//sizeof(arr[0])-计算的是数组第一个元素的大小-4
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	scanf("%d", &k);
//	//折半查找
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	//1.2.
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//#include <limits.h>

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	int c = (a + b) / 2;
//	printf("%d\n", c);
//
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//sizeof(buf)/sizeof(buf[0])-2;
//	//strlen(buf)-1;
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");//system函数是执行系统命令的
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//abcdef
//abcq
//
//int main()
//{
//	int i = 0;
//	//用来存放密码
//	//假设正确的密码是字符串："123456"
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//两个字符串的比较不能使用==，应该使用strcmp函数
//		//strcmp - 研究返回值
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*****  1. play   *****\n");
//	printf("*****  0. exit   *****\n");
//	printf("**********************\n");
//}
////RAND_MAX 0x7fff
////0-32767
////%100
////0-99 +1
////1-100
//
//void game()
//{
//	//1. 生成随机数(1-100)
//	//电脑上的时间是在发生变化的
//	//time()函数返回的就是时间戳
//	int ret = rand()%100+1;//用来生成随机数的
//	//printf("%d\n", ret);
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//
//	//整个过程设置一次就行
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择(1/0):>");
//		scanf("%d", &input);
//		switch (input)
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
//	} while (input);
//
//	return 0;
//}
//
//


//void test()
//{
//
//
//}
//
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//写一个关机程序
//1分钟内关机
//1分钟内输入：我是猪，取消关机
//
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//倒计时开始关机
//	while (1)
//	{
//
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//倒计时开始关机
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}