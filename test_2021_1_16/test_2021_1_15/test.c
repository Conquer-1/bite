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
//gets()��ȡһ��
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
//	}//���Ż��棩
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//������������в��Ҿ����ĳ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�۰����/���ֲ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
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

//дһ�������ӡ1-100֮������3�ı���������
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

//���������������������������Լ��
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

//��ӡ1000�굽2000��֮�������
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

//��ӡ100~200֮�������
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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//��10 �����������ֵ
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

//����Ļ�����9*9�˷��ھ���
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

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	//���������
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//������ҪѰ�ҵ���
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = n - 1;
//	if (arr[1]>arr[0])//����
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
//	else//�ݼ�
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