#define _CRT_SECURE_NO_WARNINGS
//�����жϵĺ���ʵ��
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

//���ֲ��ҵĺ���ʵ��
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
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	int ret = binary_search(arr, k, 10);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//�����жϵĺ���ʵ��
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
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//�����������ĺ���ʵ��
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
//	printf("����֮ǰ:a = %d,b =%d\n", a, b);
//	Swap(&a, &b);
//	printf("����֮��:a = %d,b =%d\n", a, b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

//strcpyʹ��
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";//����Դ
//	char arr2[20] = "xxxxxxxx";//Ŀ�ĵ�
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memsetʹ��
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


//��ʽ���ϵĲ���
int get_max(int x, int y)
{
	int z = (x > y) ? (x) : (y);
	return z;
}

int main()
{
	int a = 10;
	int b = 20;

	int max = get_max(get_max(2, 3), b);//�ҳ�2�������Ľϴ�ֵ
	
	printf("max = %d\n", max);

	return 0;
}