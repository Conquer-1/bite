#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned int unint;
//int main(void)
//{
//	unsigned int num = 10;
//	unint num2 = 0;
//	return 0;
//}
//static - ��̬��
//static���ξֲ�����
//�ı�ֲ��������������ڣ�������û�б仯
//static����ȫ�ֱ���
//static���κ���

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
//����
//extern �����ⲿ���ŵ�
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//����	1	error LNK2001: �޷��������ⲿ���� _g_val	
//���Ӵ���

//������洢������
//				�Ĵ���
//		|	cache�����ٻ����棩
//		|		�ڴ�
//		|		Ӳ��
//		|		����

//register
//int main()
//{
//	register int a = 10;
//	//register�ǽ�����Լ������ı����洢���Ĵ���
//	return 0;
//}

