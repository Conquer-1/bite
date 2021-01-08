#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char arr[]="abcdef";//常量字符串
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"常量字符串
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串
//	const char* p2 = "abcdef";//常量字符串
//	if (arr1 == arr2)//地址不同
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//input haha
//	if (p1 == p2)//地址相同
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//input hehe
//	return 0;
//}
//指针数组 是数组
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d  ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针-指针
//int main()
//{
//	//int* p = NULL;//p是整形指针-指向整形的指针-可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
//					//数组指针-指向数组的指针-存放数组的地址
//	//int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;//char*-pa指向数组的元素类型是char*	(*pa) *说明pa是指针，pa指针变量的名字	[5]pa指向的数组是5个元素的
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	///*for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa+i));//*pa==arr
//	//}
//	return 0;
//}
//参数是数组的形式
//void print1(int arr[3][5], int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);//arr-数组名-数组名就是首元素地址（通常情况）
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ",arr[i]);
//		//printf("%d ", p[i]);
//	}
//	return 0;
//}




