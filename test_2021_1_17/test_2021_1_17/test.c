#define _CRT_SECURE_NO_WARNINGS
//C���Ա����Ŀ��ϰ
//1.��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
//��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ�����������������С�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;//��λ��
//	int count = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			for (k = 1; k <= 4; k++)
//			{
//				if ((i != j) && (j != k) && (i != k))
//				{
//					printf("%d%d%d ", i, j, k);
//					count++;
//					if ((count % 4 == 0) && (count != 0))
//						printf("\n");
//				}
//			}
//		}
//	}
//	printf("һ��%d��\n", count);
//	return 0;
//}

 //2.��ҵ���ŵĽ������������ɡ�����(i)���ڻ����10��Ԫʱ���������10%�������
//��10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
//��7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
//40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
//100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������i����Ӧ���Ž���������
//#include <stdio.h>
//int main()
//{
//	long long i = 0;
//	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	scanf("%ld", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.75;
//	bonus4 = bonus2 + 200000 * 0.5;
//	bonus6 = bonus4 + 200000 * 0.3;
//	bonus10 = bonus6 + 400000 * 0.15;
//	if (i <= 100000)
//		bonus = i*0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000)*0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000)*0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000)*0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000)*0.015;
//	else
//		bonus = bonus10 + (i - 1000000)*0.01;
//	printf("bonus=%.0lf\n", bonus);
//	return 0;
//}

//3.һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int x = sqrt(i + 100);
//		int y = sqrt(i + 168);
//		if ((x*x == i + 100) && (y*y == i + 168))
//		{
//			printf("�������%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//4.����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int sum = 0;
//	int leap = 0;
//	printf("�����ʽΪ����-��-��\n");
//	scanf("%d-%d-%d", &year, &month, &day);
//	switch (month)
//	{
//		case 1:
//			sum = 0;
//			break;
//		case 2:
//			sum = 31;
//			break;
//		case 3:
//			sum = 59;
//			break;
//		case 4:
//			sum = 90;
//			break;
//		case 5:
//			sum = 120;
//			break;
//		case 6:
//			sum = 151;
//			break;
//		case 7:
//			sum = 181;
//			break;
//		case 8:
//			sum = 212;
//			break;
//		case 9:
//			sum = 243;
//			break;
//		case 10:
//			sum = 273;
//			break;
//		case 11:
//			sum = 304;
//			break;
//		case 12:
//			sum = 334;
//			break;
//	}
//	sum += day;
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		leap = 1;
//	if (leap = 1 && month > 2)
//		sum++;
//	printf("��һ������һ��ĵ�%d��", sum);
//	return 0;
//}

//5.������������x,y,z���������������С�������
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int t = 0;
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("%d %d %d\n", x, y, z);
	return 0;
}