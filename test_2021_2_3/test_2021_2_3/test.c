#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//void qsort(void *base, //待排序的数据的起始位置
//	      size_t num,  //排序的元素个数
//		  size_t width, //每个元素的宽度
//		  int(*cmp)(const void *e1, const void *e2));//函数指针-待比较的2个元素的比较函数
#include <stdlib.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

//1.数组名单独放在sizeof()内部，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出的是整个数组的地址
//除上面2中情况之外，所有的数组名都是数组首元素的地址

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 - 数组名单独放在sizeof内部，计算的是数组总大小
//	printf("%d\n", sizeof(a + 0));//4/8   a+0 是第一个元素的地址
//	printf("%d\n", sizeof(*a));//*a 就是数组a的首元素
//	printf("%d\n", sizeof(a + 1));//4/8   a+1 是数组第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4 a[1]就是数组的第二个元素
//	printf("%d\n", sizeof(&a));  //4/8  &a 是数组的地址，但是是地址就是4/8个字节
//	printf("%d\n", sizeof(*&a)); //16 sizeof(a)
//	//&a    int(*)[4]
//	printf("%d\n", sizeof(&a + 1));//4/8 &a + 1 是一个地址，指向是数组之后的空间
//	printf("%d\n", sizeof(&a[0]));//4/8 首元素的地址 
//	printf("%d\n", sizeof(&a[0] + 1));//数组第二个元素的地址
//
//	return 0;
//}


//int main()
//{
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));//随机值-因为arr数组中本来没有\0，就会在数组arr后继续找\0。
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//
//	printf("%d\n", sizeof(arr));//6-数组名arr，单独放在sizeof内部
//	printf("%d\n", sizeof(arr + 0));//4/8 arr是数组首元素的地址
//	printf("%d\n", sizeof(*arr));   //1 - *arr 数组首元素 
//	printf("%d\n", sizeof(arr[1])); //1 - arr[1]数组的第二个元素
//	printf("%d\n", sizeof(&arr));   //4/8 &arr虽然是数组的地址，但也是地址，是地址大小就是4/8字节
//	printf("%d\n", sizeof(&arr + 1)); //4/8 &arr+1跳过了整个数组，指向了数组之后，但还是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1是第二个元素的地址
//
//
//	return 0;
//}
//
//sizeof(操作数)  操作符 计算操作数的所占空间的大小的
//类型，变量，数组
//计算大小的时候，不在乎内存中放的值
//
//strlen - 求【字符串】长度的
//只使用于：字符串，字符数组，求长度的时候，关注'\0'
//库函数
//

//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	printf("%d\n", sizeof(arr));//7 计算的arr数组的总大小
//	printf("%d\n", sizeof(arr + 0));//4/8-  arr+0是数组arr的首元素地
//	printf("%d\n", sizeof(*arr));   //1
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr数组的地址
//	printf("%d\n", sizeof(&arr + 1));//4/8 字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1是第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	printf("%d\n", sizeof(p));    //4/8 - p就是个指针变量
//	printf("%d\n", sizeof(p + 1));//4/8  p+1是字符'b'的地址
//	printf("%d\n", sizeof(*p));   //1  p是字符指针，*p访问一个字节
//	printf("%d\n", sizeof(p[0])); //1 p[0]  == *(p+0) == *p
//	printf("%d\n", sizeof(&p));//4/8   &p 是地址
//	printf("%d\n", sizeof(&p + 1)); //4/8 &p+1 是指向p后边的空间的地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]+1 就是地址
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0]+1);
//	//对于二维数组
//	printf("%d\n", sizeof(a));//48-数组名单独放在sizeof内部，数组名表示整个，计算的是整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]是二维数组第一行的数组名
//	//第一行的数组名单独放在sizeof内部，计算的是第一行这个数组的总大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4/8 - arr[0]作为第一行的数组名，并没有单独放在sizeof内部
//	//所以数组名相当于数组首元素的地址，就是第一行第一个元素的地址
//	//a[0]+1 - 第一行第二个元素的地址
//	
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素的大小
//	printf("%d\n", sizeof(a + 1)); //4/8 - a作为二维数组的数组名，并没有&，也没有单独放在sizeof内部
//	//那么数组名a就是首元素（第1行）的地址
//	//所以a+1,就是第2行的地址
//	//int(*)[4]
//
//	printf("%d\n", sizeof(*(a + 1)));//16 第二行的大小  *(a+1) == a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &arr[0]是第一行的地址。+1，就是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  计算的是第二行的大小
//	printf("%d\n", sizeof(*a));  //16 - *a ==> *(a+0) ==> a[0]
//	//a是二维数组的数组名，没有&，没单独放在sizeof内部
//	//所以a是二维数组首元素的地址,就是第一行的地址
//	//*s就是第一行
//
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3] - 明确了类型就可以计算大小
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//


//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//
//	printf("%p\n", p + 0x1);//p是结构体的指针，0x100000+20 = 0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+1 = 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000+4 = 0x100004
//
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { 1, 3, 5 };
//	//1 3
//	//5 0 
//	//0 0
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//三部翻转法
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//逆序左边
	reverse(arr + k, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体
}

int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 1; i < len; i++)
	{
		left_move(s1, 1);//要注意不要用i，因为旋转一次就不再是s1了，
		//所以通过一个一个地旋转来变化，左旋和右旋差不多
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}


//#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat
//	//strncat
//	strncat(str1, str1,6);//自己追加用strncat   abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";//变成2倍 ab cdefab cdef
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for (j = 0; j <len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.
//		*(arr + len - 1) = tmp;
//	}
//}
//字符串左旋
//ABCD左旋一个字符BCDA
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////三部翻转法
////abcdef
////bafedc
////cdefab
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr + k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}



//杨氏矩阵
//题目内容：有一个数字矩阵，每行从左到右是递增的，从上到下是递减的
//编写程序在这样的矩阵中查找某个数字是否存在
//要求时间小于O(N);

//#include <stdio.h>
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//
//		else
//		{
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}