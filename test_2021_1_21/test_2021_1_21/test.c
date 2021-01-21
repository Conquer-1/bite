#define _CRT_SECURE_NO_WARNINGS
//素数判断的函数实现
//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//二分查找的函数实现
//#include <stdio.h>
//int binary_search(int* a,int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left>right)
//		return -1;
//}
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, 10);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//闰年判断的函数实现
//#include <stdio.h>
//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret != 0)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}

//交换两个数的函数实现
//#include <stdio.h>
//void Swap(int* px, int* py)
//{
//	int c = *px;
//	*px = *py;
//	*py = c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换之前:a = %d,b =%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换之后:a = %d,b =%d\n", a, b);
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include <stdio.h>
//void function(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	function(n);
//	return 0;
//}

//strcpy使用
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";//数据源
//	char arr2[20] = "xxxxxxxx";//目的地
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	//xxxxx bit
//	return 0;
//}


//形式的上的参数
int get_max(int x, int y)
{
	int z = (x > y) ? (x) : (y);
	return z;
}

int main()
{
	int a = 10;
	int b = 20;

	int max = get_max(get_max(2, 3), b);//找出2个整数的较大值
	
	printf("max = %d\n", max);

	return 0;
}