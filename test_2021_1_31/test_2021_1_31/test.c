#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
////截断
////整形提升看符号位本身
//
//int main()
//{
//	char a = -1;
//	//100000000000000000000001
//	//111111111111111111111110
//	//111111111111111111111111
//	//11111111-a
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//100000000000000010000000
//	//111111111111111101111111
//	//111111111111111110000000
//	//10000000 - a
//	//%u 无符号整数
//	//111111111111111110000000-补码
//	//111111111111111110000000-原码
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	char a = 128;
//	//000000000000000010000000
//	//10000000 - a
//	//111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//100000000000000000010100-i的原码
//	//111111111111111111101011-i的反码
//	//111111111111111111101100-i的补码
//	//000000000000000000001010-j
//	//111111111111111111110110-补码
//	//111111111111111111110101-减1
//	//100000000000000000001010-取反
//	printf("%d\n", i+j);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//毫秒
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i < 1000; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//死循环

#include <stdio.h>
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
}

//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//打印杨辉三角
//1
//1 1
//1 2 1

//#include <stdio.h>
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((j == 0) || (i == j))
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//1 1 1 1 1 1
//2 2 2 2 2 2
//3 3 3 3 3 3
//4 4 4 4 4 4
//5 5 5 5 5 5
//6 6 6 6 6 6

//a,b,c,d,e,f说的话一半对一半错，排名
//#include <stdio.h>
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

//请同学们自主完成课堂代码的编写
//根据本节课讲解，将涉及到的核心知识点，进行整理并编写一篇博客
//以博客链接的方式，提交博客作业


//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}