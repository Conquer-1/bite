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

//void qsort(void *base, //����������ݵ���ʼλ��
//	      size_t num,  //�����Ԫ�ظ���
//		  size_t width, //ÿ��Ԫ�صĿ��
//		  int(*cmp)(const void *e1, const void *e2));//����ָ��-���Ƚϵ�2��Ԫ�صıȽϺ���
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

//1.��������������sizeof()�ڲ�����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&����������������ʾ�������飬ȡ��������������ĵ�ַ
//������2�����֮�⣬���е�����������������Ԫ�صĵ�ַ

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 - ��������������sizeof�ڲ���������������ܴ�С
//	printf("%d\n", sizeof(a + 0));//4/8   a+0 �ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//*a ��������a����Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8   a+1 ������ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4 a[1]��������ĵڶ���Ԫ��
//	printf("%d\n", sizeof(&a));  //4/8  &a ������ĵ�ַ�������ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*&a)); //16 sizeof(a)
//	//&a    int(*)[4]
//	printf("%d\n", sizeof(&a + 1));//4/8 &a + 1 ��һ����ַ��ָ��������֮��Ŀռ�
//	printf("%d\n", sizeof(&a[0]));//4/8 ��Ԫ�صĵ�ַ 
//	printf("%d\n", sizeof(&a[0] + 1));//����ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}


//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ-��Ϊarr�����б���û��\0���ͻ�������arr�������\0��
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//	printf("%d\n", sizeof(arr));//6-������arr����������sizeof�ڲ�
//	printf("%d\n", sizeof(arr + 0));//4/8 arr��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));   //1 - *arr ������Ԫ�� 
//	printf("%d\n", sizeof(arr[1])); //1 - arr[1]����ĵڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));   //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ���ǵ�ַ��С����4/8�ֽ�
//	printf("%d\n", sizeof(&arr + 1)); //4/8 &arr+1�������������飬ָ��������֮�󣬵����ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//
//	return 0;
//}
//
//sizeof(������)  ������ �������������ռ�ռ�Ĵ�С��
//���ͣ�����������
//�����С��ʱ�򣬲��ں��ڴ��зŵ�ֵ
//
//strlen - ���ַ��������ȵ�
//ֻʹ���ڣ��ַ������ַ����飬�󳤶ȵ�ʱ�򣬹�ע'\0'
//�⺯��
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
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	printf("%d\n", sizeof(arr));//7 �����arr������ܴ�С
//	printf("%d\n", sizeof(arr + 0));//4/8-  arr+0������arr����Ԫ�ص�
//	printf("%d\n", sizeof(*arr));   //1
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr����ĵ�ַ
//	printf("%d\n", sizeof(&arr + 1));//4/8 �ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
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
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	printf("%d\n", sizeof(p));    //4/8 - p���Ǹ�ָ�����
//	printf("%d\n", sizeof(p + 1));//4/8  p+1���ַ�'b'�ĵ�ַ
//	printf("%d\n", sizeof(*p));   //1  p���ַ�ָ�룬*p����һ���ֽ�
//	printf("%d\n", sizeof(p[0])); //1 p[0]  == *(p+0) == *p
//	printf("%d\n", sizeof(&p));//4/8   &p �ǵ�ַ
//	printf("%d\n", sizeof(&p + 1)); //4/8 &p+1 ��ָ��p��ߵĿռ�ĵ�ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]+1 ���ǵ�ַ
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0]+1);
//	//���ڶ�ά����
//	printf("%d\n", sizeof(a));//48-��������������sizeof�ڲ�����������ʾ���������������������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]�Ƕ�ά�����һ�е�������
//	//��һ�е���������������sizeof�ڲ���������ǵ�һ�����������ܴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4/8 - arr[0]��Ϊ��һ�е�����������û�е�������sizeof�ڲ�
//	//�����������൱��������Ԫ�صĵ�ַ�����ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//a[0]+1 - ��һ�еڶ���Ԫ�صĵ�ַ
//	
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1)); //4/8 - a��Ϊ��ά���������������û��&��Ҳû�е�������sizeof�ڲ�
//	//��ô������a������Ԫ�أ���1�У��ĵ�ַ
//	//����a+1,���ǵ�2�еĵ�ַ
//	//int(*)[4]
//
//	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ��еĴ�С  *(a+1) == a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &arr[0]�ǵ�һ�еĵ�ַ��+1�����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  ������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(*a));  //16 - *a ==> *(a+0) ==> a[0]
//	//a�Ƕ�ά�������������û��&��û��������sizeof�ڲ�
//	//����a�Ƕ�ά������Ԫ�صĵ�ַ,���ǵ�һ�еĵ�ַ
//	//*s���ǵ�һ��
//
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3] - ��ȷ�����;Ϳ��Լ����С
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


//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//
//	printf("%p\n", p + 0x1);//p�ǽṹ���ָ�룬0x100000+20 = 0x00100014
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



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
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

//������ת��
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//�������
	reverse(arr + k, arr + len - 1);//�����ұ�
	reverse(arr, arr + len - 1);//��������
}

int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 1; i < len; i++)
	{
		left_move(s1, 1);//Ҫע�ⲻҪ��i����Ϊ��תһ�ξͲ�����s1�ˣ�
		//����ͨ��һ��һ������ת���仯���������������
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
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat
//	//strncat
//	strncat(str1, str1,6);//�Լ�׷����strncat   abcdefabcdef
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
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
//	char arr1[30] = "abcdef";//���2�� ab cdefab cdef
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



//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
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
//�ַ�������
//ABCD����һ���ַ�BCDA
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////������ת��
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
//	reverse(arr,arr+k-1);//�������
//	reverse(arr + k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}



//���Ͼ���
//��Ŀ���ݣ���һ�����־���ÿ�д������ǵ����ģ����ϵ����ǵݼ���
//��д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ��С��O(N);

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
//	//�Ҳ���
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("�ҵ���\n");
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}