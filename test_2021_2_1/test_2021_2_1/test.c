#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//Êý×éÖ¸Õë
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);//*p<==>arr
//		//printf("%d ", *((*p)+i));
//		//printf("%d ", p[0][i]);//*(*(p+0)+i)
//	}
//	return 0;
//}

struct S
{
	int *p;
};
void print1(struct S* ps)
{
	printf("%d\n", *(ps->p));
}
int main()
{
	int a = 2021;
	struct S s = { &a };
	print1(&s);
	return 0;
}
