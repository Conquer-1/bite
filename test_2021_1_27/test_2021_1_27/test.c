#define _CRT_SECURE_NO_WARNINGS
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//#include <stdio.h>
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容
//#include <stdio.h>
//#include <string.h>
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char str[100];
//	gets(str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void Reverse(char str[], int sz)
//{
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		//printf("%c", str[i]);
//		printf("%c", *(str+i));
//	}
//}
//int main()
//{
//	char str[100];
//	gets(str);
//	int sz = strlen(str);
//	//printf("%d\n", sz);
//	Reverse(str, sz);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;//位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//打印菱形
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);//7
//	//上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*(line - i - 1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = 0;//喝的汽水
	total = money;
	int empty = money;//空瓶
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	/*if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;*/
	return 0;
}