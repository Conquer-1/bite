#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h.>

//������
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);//����һ��ָ�����Ч��
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("�������ַ���Ϊ��%s\n", arr);
//	return 0;
//}

//ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//��7��6
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²���
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ���� 1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	/*total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("total = %d\n", total);
//	return 0;
//}

//��������ż��˳�� ��������ʹ����ȫ����λ��ż��ǰ�� ͨ������ʵ��
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////1.����߿�ʼ��һ��ż��
////2.���ұ߿�ʼ��һ������
////3.�����ǽ���
//move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//�������ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1.2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}
