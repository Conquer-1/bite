#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

//int main()
//{
//	short s = 2;
//	int a = 10;
//	printf("%d\n", sizeof(s = s + a));
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d,b = %d\n", a, b);
	return 0;
}