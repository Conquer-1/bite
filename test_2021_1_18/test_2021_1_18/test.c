#define _CRT_SECURE_NO_WARNINGS
//C语言经典题练习
//6.用*号输出字母c的图案
//#include <stdio.h>
//int main()
//{
//	printf(" ****\n");
//	printf(" *\n");
//	printf(" * \n");
//	printf(" ****\n");
//	return 0;
//}

//7.输出特殊图案，请在c环境中运行，看一看，very beautiful!
//#include <stdio.h>
//int main()
//{
//	char a = 2, b = 4;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}

//8.输出9*9口诀。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			r = i*j;
//			printf("%d * %d =%2d  ", j, i, r);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9.要求输出国际象棋棋盘。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//				printf("%c%c", 1, 1);
//			else
//				printf(" ");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10.打印楼梯，同时在楼梯上方打印两个笑脸。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("%c%c\n",1,1);/*输出两个笑脸*/
//	for (i = 1; i<11; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%c%c", 19, 19);
//		printf("\n");
//	}
//	return 0;
//}

//11.利用时间函数编写一个猜数程序
//#include<stdio.h>
//int main()
//
//{
//	int magic, guess = 0;
//	int count = 0;
//	srand(time(NULL));
//	magic = rand() % 100 + 1;
//	while (magic != guess)
//	{
//		printf("please enter:");
//		scanf("%d", &guess);
//		count++;
//		if (guess>magic)
//			printf("WRONG,too big!\n");
//		else if (guess<magic) 
//			printf("WRONG,too small!\n");
//		else 
//			printf("RIGHT!\n");
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//12.利用π/4=1-1/3+1/5-1/7??计算π的值直到最后一项的绝对值小于0.0001为止，要求统计总共累加了多少项。
#include <stdio.h>
int main()
{
	int i = 2;
	int f = 1;
	double pi = 0.0;
	double sum = 0.0;
	double t = 1.0;
	while (t >= 1e-4)
	{
		sum += f*t;
		t = 1.0 / (2 * i - 1);
		i++;
		f = -f;
	}
	pi = sum * 4;
	printf("%lf\n", pi);
	return 0;
}