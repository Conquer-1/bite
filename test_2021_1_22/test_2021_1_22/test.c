#define _CRT_SECURE_NO_WARNINGS
//��ӡһ������ÿһλ
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//1.�ݹ�ʵ��
//#include <stdio.h>
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//}
//2.�ǵݹ�ʵ��
//#include <stdio.h>
//int factorial(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n--;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�ʵ��
//#include <stdio.h>
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//�ǵݹ�ʵ��
//#include <stdio.h>
//int my_strlen(char* p)
//{
//	int count = 0;
//	while(*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������
//�ǵݹ�ʵ��
//#include <stdio.h>
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hello bit";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//�ݹ�ʵ��
//#include <stdio.h>
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19  ���룺1729�������19
//#include <stdio.h>
//int DigSum(unsigned int n)
//{
//	/*static int sum = 0;
//	if (n > 9)
//	{
//		DigSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;*/
//	if (n > 9)
//	{
//		return DigSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k > 0)
//		return n*Pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�ʵ��
//#include <stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//�ǵݹ�ʵ��
#include <stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("ret = %d\n", ret);
	return 0;
}