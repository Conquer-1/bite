#define _CRT_SECURE_NO_WARNINGS
//Day 1 :比特就业课练习题
//第一题
//#include <stdio.h>
//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}
//22

//第二题
//#include <stdio.h>
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//4

//第三题：宏定义的宏展开是在预处理阶段完成的

//第四题
//main()
//{
//	char a = '0';
//	int b = 0;
//	float c = 0.0;
//	double d = 0.0;
//	double ret = a*b + d - c;
//}
//#define INT_PTR int*
//typedef int* int_ptr;
//#include <stdio.h>
//main()
//{
//	//INT_PTR a, b;//b是int类型
//	//int_ptr c, d;
//	int arr[4][5] = {0,1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int j = 0;
//	printf("%p\n", arr[1] + 3);
//	return 0;
//}

//在二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数
#include <stdio.h>
void Find(int* arr,int row,int col,int num)
{
	if (arr != NULL && row > 0 && col > 0)
	{
		int tmpRow = 0;
		int tmpCol = col - 1;
		while (tmpRow < row&&col >= 0)
		{
			if (arr[tmpRow*col + tmpCol] == num)
			{
				printf("%d,intdex == %d\n", arr[tmpRow * col + tmpCol], tmpRow * col + tmpCol);
				break;
			}
			else if (arr[tmpRow * col + tmpCol] > num)
			{
				tmpCol--;
			} 
			else
			{
				tmpRow++;
			}
		}
	}
}
int main()
{
	int arr[4][4] = {
		1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15
	};
	Find((int*)arr, 4, 4, 15);
	return 0;
}