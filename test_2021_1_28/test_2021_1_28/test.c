#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
//size_t strlen( const char *string );	size_t unsigned integer

#include <stdio.h>
#include <assert.h>
unsigned int my_strlen(const char *str)
{
	assert(str != NULL);
	/*unsigned int count = 0;
	char *start = str;
	while (*start++ != '\0')
	{
		count++;
	}
	return count;*/
	const char *start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}
int main()
{
	char str[] = "abcdefg";
	int count = my_strlen(str);
	printf("count = %d\n", count);
	return 0;
}

//ģ��ʵ�ֿ⺯��strcpy
//char *strcpy( char *strDestination, const char *strSource );

//#include <stdio.h>
//#include <assert.h>
//char *my_strcpy(char *dest, const char *src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "qqqqqqqqqqqq";
//	char arr2[] = "abcdefg";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void sort(int arr[], int sz)
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}
