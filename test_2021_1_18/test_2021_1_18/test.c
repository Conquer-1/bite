#define _CRT_SECURE_NO_WARNINGS
//C���Ծ�������ϰ
//6.��*�������ĸc��ͼ��
//#include <stdio.h>
//int main()
//{
//	printf(" ****\n");
//	printf(" *\n");
//	printf(" * \n");
//	printf(" ****\n");
//	return 0;
//}

//7.�������ͼ��������c���������У���һ����very beautiful!
//#include <stdio.h>
//int main()
//{
//	char a = 2, b = 4;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}

//8.���9*9�ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			r = i*j;
//			printf("%d * %d =%2d  ", j, i, r);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9.Ҫ����������������̡�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//				printf("%c%c", 1, 1);
//			else
//				printf(" ");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10.��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("%c%c\n",1,1);/*�������Ц��*/
//	for (i = 1; i<11; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%c%c", 19, 19);
//		printf("\n");
//	}
//	return 0;
//}

//11.����ʱ�亯����дһ����������
//#include<stdio.h>
//int main()
//
//{
//	int magic, guess = 0;
//	int count = 0;
//	srand(time(NULL));
//	magic = rand() % 100 + 1;
//	while (magic != guess)
//	{
//		printf("please enter:");
//		scanf("%d", &guess);
//		count++;
//		if (guess>magic)
//			printf("WRONG,too big!\n");
//		else if (guess<magic) 
//			printf("WRONG,too small!\n");
//		else 
//			printf("RIGHT!\n");
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//12.���æ�/4=1-1/3+1/5-1/7??����е�ֱֵ�����һ��ľ���ֵС��0.0001Ϊֹ��Ҫ��ͳ���ܹ��ۼ��˶����
#include <stdio.h>
int main()
{
	int i = 2;
	int f = 1;
	double pi = 0.0;
	double sum = 0.0;
	double t = 1.0;
	while (t >= 1e-4)
	{
		sum += f*t;
		t = 1.0 / (2 * i - 1);
		i++;
		f = -f;
	}
	pi = sum * 4;
	printf("%lf\n", pi);
	return 0;
}