#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
////�ض�
////��������������λ����
//
//int main()
//{
//	char a = -1;
//	//100000000000000000000001
//	//111111111111111111111110
//	//111111111111111111111111
//	//11111111-a
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//100000000000000010000000
//	//111111111111111101111111
//	//111111111111111110000000
//	//10000000 - a
//	//%u �޷�������
//	//111111111111111110000000-����
//	//111111111111111110000000-ԭ��
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	char a = 128;
//	//000000000000000010000000
//	//10000000 - a
//	//111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//100000000000000000010100-i��ԭ��
//	//111111111111111111101011-i�ķ���
//	//111111111111111111101100-i�Ĳ���
//	//000000000000000000001010-j
//	//111111111111111111110110-����
//	//111111111111111111110101-��1
//	//100000000000000000001010-ȡ��
//	printf("%d\n", i+j);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//����
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i < 1000; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//��ѭ��

#include <stdio.h>
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
}

//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//��ӡ�������
//1
//1 1
//1 2 1

//#include <stdio.h>
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((j == 0) || (i == j))
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//1 1 1 1 1 1
//2 2 2 2 2 2
//3 3 3 3 3 3
//4 4 4 4 4 4
//5 5 5 5 5 5
//6 6 6 6 6 6

//a,b,c,d,e,f˵�Ļ�һ���һ�������
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//��ͬѧ��������ɿ��ô���ı�д
//���ݱ��ڿν��⣬���漰���ĺ���֪ʶ�㣬����������дһƪ����
//�Բ������ӵķ�ʽ���ύ������ҵ


//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}