#define _CRT_SECURE_NO_WARNINGS
//��ŵ���ƶ���ʽ
//#include<stdio.h>
//void move(int n, char a, char b, char c)
//{
//	if (n == 1)
//		printf("\t%c->%c\n", a, c);    //��nֻ��1����ʱ��ֱ�Ӵ�A�ƶ���C 
//	else
//	{
//		move(n - 1, a, c, b);            //��A��n-1������ͨ��C�ƶ���B
//		printf("\t%c->%c\n", a, c);   //��A�����1����(������)�ƶ���C
//		move(n - 1, b, a, c);            //��B�����n-1����ͨ��A�ƶ���C
//	}
//}
//
//main()
//{
//	int n;
//	printf("������Ҫ�ƶ��Ŀ�����");
//	scanf("%d", &n);
//	move(n, 'A', 'B', 'C');
//}

//��ŵ���ƶ���������
#include <stdio.h>
int move(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * move(n - 1) + 1;
}
int main()
{
	int n = 0;
	printf("Ҫ�ƶ��Ŀ���Ϊ��>");
	scanf("%d", &n);
	int move_sum = move(n);
	printf("�ƶ�%d������Ҫ�Ĵ�����>%d\n",n, move_sum);
	return 0;
}
