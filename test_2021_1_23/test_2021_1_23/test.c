#define _CRT_SECURE_NO_WARNINGS
//Day 1 :���ؾ�ҵ����ϰ��
//��һ��
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

//�ڶ���
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

//�����⣺�궨��ĺ�չ������Ԥ����׶���ɵ�

//������
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
//	//INT_PTR a, b;//b��int����
//	//int_ptr c, d;
//	int arr[4][5] = {0,1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int j = 0;
//	printf("%p\n", arr[1] + 3);
//	return 0;
//}

//�ڶ�ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�����
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