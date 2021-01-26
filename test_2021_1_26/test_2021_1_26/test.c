#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//void print(int m)
//{
//	int i = 0;
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//#include <stdio.h>
//int Count(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (((n>>i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = Count(n);
//	printf("%d\n", count);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int count = 0;
	scanf("%d%d", &a, &b);
	int c = a^b;
	while (c)
	{
		c = c & (c - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}