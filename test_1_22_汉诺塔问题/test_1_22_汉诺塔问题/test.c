#define _CRT_SECURE_NO_WARNINGS
//汉诺塔移动方式
//#include<stdio.h>
//void move(int n, char a, char b, char c)
//{
//	if (n == 1)
//		printf("\t%c->%c\n", a, c);    //当n只有1个的时候直接从A移动到C 
//	else
//	{
//		move(n - 1, a, c, b);            //把A的n-1个盘子通过C移动到B
//		printf("\t%c->%c\n", a, c);   //把A的最后1个盘(最大的盘)移动到C
//		move(n - 1, b, a, c);            //把B上面的n-1个盘通过A移动到C
//	}
//}
//
//main()
//{
//	int n;
//	printf("请输入要移动的块数：");
//	scanf("%d", &n);
//	move(n, 'A', 'B', 'C');
//}

//汉诺塔移动次数问题
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
	printf("要移动的块数为—>");
	scanf("%d", &n);
	int move_sum = move(n);
	printf("移动%d块所需要的次数—>%d\n",n, move_sum);
	return 0;
}
