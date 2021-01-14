#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned int unint;
//int main(void)
//{
//	unsigned int num = 10;
//	unint num2 = 0;
//	return 0;
//}
//static - 静态的
//static修饰局部变量
//改变局部变量的生命周期，作用域没有变化
//static修饰全局变量
//static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//
//		test();
//		i++;
//	}
//	return 0;
//}
//声明
//extern 声明外部符号的
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//错误	1	error LNK2001: 无法解析的外部符号 _g_val	
//链接错误

//计算机存储器都有
//				寄存器
//		|	cache（高速换缓存）
//		|		内存
//		|		硬盘
//		|		网盘

//register
//int main()
//{
//	register int a = 10;
//	//register是建议把自己创建的变量存储到寄存器
//	return 0;
//}

