#define _CRT_SECURE_NO_WARNINGS
//素数求解的N种境界

//（一)试除法：试除法就是要判断一个数x是否为素数，就不断尝试小于x大于1的自然数，
//只要有一个能够整除，则x是合数，否则是素数

//1.境界1：判断x是否为素数，从2一直尝试到x-1，这种方法效率很差
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; ++i)
//	{
//		for (j = 2; j < i; ++j)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}

//2.境界2：因为所有素数都是奇数，所以可优化为：
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//境界3：除了2以外，所有可能的质因数都是奇数，先尝试2，再尝试从3开始直到x/2的所有奇数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < i / 2; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i / 2)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}

//境界4：只要从2尝试到sqrt(x)就可以，因为因数都是成对出现的，
//例如100的因数有：1和100、2和50、4和25、5和20、10和10,成对的因数，
//其中一个必然小于等于100的开方，另一个必然大于等于100的开方。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}

//境界5：只要尝试小于sqrt(x)的素数即可，而这些素数，
//在前面已经算出，将已经算出的素数，先保存起来，
//然后用于后续的试除，效率大大提高。
//（二）筛选法
//步骤：
//1.先将1去除（1不是素数）
//2.用2除它后面的各个数，把能被2整除的数去除，即把2的倍数去除掉
//3.用3除后面的各个数，把能被3整除的数去除，即把3的倍数去除掉
//4.分别用5…作为除数除这些数后面的数
//这些操作需要一个很大的容器去装载所有数的集合，只要满足这些步骤，
//即将大于1的且是2、3、4…的倍数全部置为0，一直到数据集合的末尾，最终不是0的数就是素数。
#include <stdio.h>
int main()
{
	int i = 9;
	int j = 0;
	int arr[100];
	int count = 0;
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < 100; i++)
	{
		j = i - 1;//空过0、1、2
		while (j>1)
		{
			if (arr[i] % j == 0)
				arr[i] = 0;
			j = j - 1;
		}
	}
	for (j = 1; j < 100; j++)
	{
		if (arr[j] != 0)
		{
			printf("%d是素数\n", arr[j]);
			count++;
		}
	}
	printf("%d\n", count);
	//system("pause");
	return 0;
}