#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//gets()读取一行
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	int j = 1;
//	/*for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}*/
//	for (i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}//（优化版）
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//在有序的数组中查找具体的某个数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//折半查找/二分查找
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("%d ", a);
			if (c > b)
			{
				printf("%d %d", c, b);
			}
			else
				printf("%d %d", b, c);
		}
		else
		{
			printf("%d %d %d", c, a, b);
		}
	}
	else
	{
		if (b > c)
		{
			printf("%d ", b);
			if (c > a)
			{
				printf("%d %d", c, a);
			}
			else
				printf("%d %d", a, c);
		}
		else
		{
			printf("%d %d %d", c, b, a);
		}
	}
	return 0;
}

//写一个代码打印1-100之间所有3的倍数的数字
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b != 0)
//	{
//		tmp = a%b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//#include <stdio.h>
//int main()
//{
//	int i = 1000;
//	for (; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印100~200之间的素数
//#include <stdio.h>
//int isprime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 100;
//	for (; i <= 200; i++)
//	{
//		int ret= isprime(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	while (i <= 100)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//		i++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	int ret = 1;
//	for (; i <= 100; i++)
//	{
//		sum += ret*1.0 / i;
//		ret = -ret;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10 个整数中最大值
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		/*if (arr[i]>max)
			max = arr[i];*/
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	printf("%d\n", max);
	return 0;
}

//在屏幕上输出9*9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%3d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	//先输入个数
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输入需要寻找的数
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = n - 1;
//	if (arr[1]>arr[0])//递增
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] > k)
//				right = mid - 1;
//			else if (arr[mid] < k)
//				left = mid + 1;
//			else
//			{
//				printf("%d\n", mid);
//				break;
//			}
//		}
//	}
//	else//递减
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//				right = mid - 1;
//			else if (arr[mid] > k)
//				left = mid + 1;
//			else
//			{
//				printf("%d\n", mid);
//				break;
//			}
//		}
//	}
//	return 0;
//}