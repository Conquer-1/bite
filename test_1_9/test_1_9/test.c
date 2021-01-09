#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜凶手
//A说：不是我	B说：是C	C说：是D	D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//凶手是C
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}

//赛马问题:有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名
//请问最少比赛几次？		8
//1 1 1 1 1 1
//2 2 2 2 2 2
//3 3 3 3 3 3
//4 4 4 4 4 4
//5 5 5 5 5 5
//6 6 6 6 6 6

//a,b,c,d,e,f说的话一半对一半错，排名
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//****
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//字符串左旋
//ABCD左旋一个字符BCDA
//#include <string.h>
//#include <assert.h>
//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for (j = 0; j <len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.
//		*(arr + len - 1) = tmp;
//	}
//}
//2.三部翻转法
//abcdef
//bafedc
//cdefab
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr + k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数判断一个字符串是不是另一个字符串旋转之后的字符串
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat
//	//strncat
//	strncat(str1, str1,6);//自己追加用strncat   abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";//变成2倍 ab cdefab cdef
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//杨氏矩阵
//题目内容：有一个数字矩阵，每行从左到右是递增的，从上到下是递减的
//编写程序在这样的矩阵中查找某个数字是否存在
//要求时间小于O(N);
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//
//		else
//		{
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}