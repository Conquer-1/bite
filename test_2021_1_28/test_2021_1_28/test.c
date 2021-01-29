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

//模拟实现库函数strlen
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

//模拟实现库函数strcpy
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

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

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
//		//从左边找偶数
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
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
