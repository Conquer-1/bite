#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define maxsize 14 //վ�����·�����ַ�������󳤶� 
//int zs = 0;//��ǰ��վ���� 
//int zsl = 0;//��ǰ����·�� 
//int m = 6;//�ļ���ȡվ���� 
//int n = 5;//�ļ���ȡ��·�� 
//
//struct station{
//	int num;//վ���
//	char name[maxsize];//վ���� 
//}stop[50];
//
//struct busline{//������· 
//	int blnum;//��·���
//	char blname[maxsize];//��·���� 
//	struct station blstop[50];
//	int sum;//��·��վ������ 
//}BL[20];
//
////�ļ���վ�����·��Ϣ��ȡ 
//void read()
//{
//	int i, j;
//	FILE* fp1;
//	FILE* fp2;
//	fp1 = fopen("����վ��.txt", "r+");
//	fp2 = fopen("������·.txt", "r+");
//	if (fp1 != NULL)
//	{
//		while (fscanf(fp1, "%d %s", &stop[i].num, &stop[i].name) != EOF)
//		{
//			i++;
//			zs++;
//		}
//	}
//	fclose(fp1);
//	for (i = 0; i<n; i++)
//	{
//		fscanf(fp2, "%d %d %s", &BL[i].blnum, &BL[i].sum, BL[i].blname);
//		for (j = 0; j<BL[i].sum; j++)
//		{
//			fscanf(fp2, "%d %s", &BL[i].blstop[j].num, BL[i].blstop[j].name);
//		}
//		zsl++;
//	}
//	printf("\n");
//	fclose(fp2);
//}
//
////���˵���ʾ���� 
//void menu()
//{
//	printf("\n\n");
//	printf("\t\t=======������·����ϵͳ=======\n");
//	printf("\t\t1��ʾȫ��վ����Ϣ\n");
//	printf("\t\t2��������վ��\n");
//	printf("\t\t3�޸Ĺ���վ��\n");
//	printf("\t\t4��������·��\n");
//	printf("\t\t5��������·��\n");
//	printf("\t\t6��ѯ����·��\n");
//	printf("\t\t7��ʾȫ����·\n");
//	printf("\t\t8������Ļ\n");
//	printf("\t\t9�˳�\n");
//}
//
////������վ�� 
//void createstation()
//{
//	if (zs == 50) printf("վ����������\n");
//	else
//	{
//		printf("����������վ������ƣ�");
//		scanf("%s", &stop[zs].name);
//		stop[zs].num = zs + 1;
//		zs++;
//	}
//}
//
////�޸�վ����Ϣ 
//void modifystation()
//{
//	int a;
//	char newname[maxsize];
//	printf("��������Ҫ�޸ĵ�վ���ţ�");
//	scanf("%d", &a);
//	if (stop[a - 1].num == a)
//	{
//		printf("%s\n", stop[a - 1].name);
//		printf("������վ��������ƣ�");
//		for (int z = 0; z<maxsize; z++)
//		{
//			stop[a - 1].name[z] = ' ';
//		}
//		scanf("%s", &stop[a - 1].name);
//	}
//	else
//		printf("��վ�㲻���ڣ�\n");
//}
//
////��ʾȫ��վ�� 
//void printstation()
//{
//	for (int i = 0; i<zs; i++)
//	{
//		printf("%d %s\n", stop[i].num, stop[i].name);
//	}
//}
//
////�½�������· 
//void createbusline()
//{
//	int a, b;
//	if (zsl == 20) printf("·������������\n");
//	else
//	{
//		printf("������������·�����ƣ�");
//		scanf("%s", &BL[zsl].blname);
//		printf("��������·��ʼվ��ţ�");
//		scanf("%d", &a);
//		if (a>zs) printf("��·��ʼվ��Ŵ���");
//		else
//		{
//			printf("��������·�յ�վ��ţ�");
//			scanf("%d", &b);
//			if (b>zs || b == a) printf("��·�յ�վ��Ŵ���");
//			else
//				BL[zsl].blnum = zsl + 1;
//			BL[zsl].blstop[0] = stop[a - 1];
//			BL[zsl].blstop[1] = stop[b - 1];
//			BL[zsl].sum = 2;
//			zsl++;
//		}
//	}
//}
//
////����������· 
//void adjustline()
//{
//	int a, b, c;
//	printf("��������Ҫ��������·��ţ�");
//	scanf("%d", &a);
//	if (a>zsl)
//		printf("����·�����ڣ�\n");
//	else
//	{
//		printf("����������վ��ı�ţ�");
//		scanf("%d", &b);
//		if (b>zs)
//			printf("��վ�㲻���ڣ�\n");
//		else
//		{
//			printf("�������վ������·��������λ�ã�");
//			scanf("%d", &c);
//			if (c >= 1 && c <= (BL[a - 1].sum + 1))
//			{
//				BL[a - 1].sum++;
//				for (int z = BL[a - 1].sum - 2; z >= c - 1; z--)
//				{
//					BL[a - 1].blstop[z + 1] = BL[a - 1].blstop[z];
//				}
//				BL[a - 1].blstop[c - 1] = stop[b - 1];
//			}
//			else
//				printf("վ��λ������\n");
//		}
//	}
//}
//
////������й�����· 
//void printbusline()
//{
//	for (int i = 0; i<20; i++)
//	{
//		if (BL[i].blnum == i + 1)
//		{
//			printf("%d", BL[i].blnum);//��·��� 
//			printf("%s", BL[i].blname);//��·���� 
//			printf("\t\t��վ����Ϊ��%dվ��\n", BL[i].sum);
//		}
//	}
//}
//
////��ѯ���幫����·��;��վ����Ϣ 
//void inquireline()
//{
//	int a;
//	printf("��������Ҫ��ѯ����·��ţ�");
//	scanf("%d", &a);
//	if (BL[a - 1].blnum == a)
//	{
//		for (int i = 0; i<BL[a - 1].sum; i++)//���������·;����վ 
//		{
//			printf("%d", i + 1);
//			printf("%s", BL[a - 1].blstop[i].name);
//			if (i != BL[a - 1].sum - 1)
//				printf("--->");
//		}
//	}
//	printf("\n");
//}
//
////������Ļ
//void clear()
//{
//	system("cls");
//	menu();
//}
//
////������ 
//int main()
//{
//	read();
//	int i;
//	menu();
//	printf("��������Ҫ���еĲ����ı�ţ�");
//	while (scanf("%d", &i) != EOF)
//	{
//		switch (i)
//		{
//		case 1: printstation(); break;
//		case 2: createstation(); break;
//		case 3: modifystation(); break;
//		case 4: createbusline(); break;
//		case 5: adjustline(); break;
//		case 6: inquireline(); break;
//		case 7: printbusline(); break;
//		case 8: clear(); break;
//		case 9: system("exit"); break;
//		default:printf("��������������\n"); break;
//		}
//		printf("��������Ҫ���еĲ����ı�ţ�");
//	}
//	return 0;
//}
//

//�ִ�ͳ��
//���������ַ������ֱ��Ϊĸ�����Ӵ���ͳ���Ӵ���ĸ���г��ֵĴ�����λ�á�ע���Ӵ������ص�������������2��
//����˵��
//�����Ϊ���У���һ��Ϊĸ�����ڶ���Ϊ�Ӵ���ĸ�����Ӵ��ĳ��ȶ�������100��
//���˵��
//����Ӵ���ĸ���г��ֵĴ������������ִ������ÿ���Ӵ���ĸ���г���ʱ���Ӵ���һ���ַ���ĸ���е�λ�ã�λ�ô�0��ʼ���㣩��
//��������
//��������1��
//12312431235412
//123
//��������2��
//12121212
//1212
//�������
//�������1��
//2 0 7
//�������2��
//3 0 2 4
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[101], b[101], num[101];
//	gets(a);
//	gets(b);
//	int i, j, k, z = 0;
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	for (i = 0; i <= len1 - len2; i++)
//	{
//		j = 0;
//		k = i;
//		while (a[k] == b[j] && j < len2)
//		{
//			k++;
//			j++;
//		}
//		if (j == len2)
//		{
//			num[z] = i;
//			z++;
//		}
//	}
//	printf("%d ", z);
//	for (i = 0; i < z; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//��λͳ��
//����һ��������10 λ�ķǸ����� N�����д����ͳ�Ƹ�����������λ�ϲ�ͬ���ֳ��ֵĴ�����
//���磺���� N=100311������ 2 �� 0��3 �� 1���� 1 �� 3��
//����˵��
//������һ�������� 10λ�ķǸ����� N��
//���˵��
//�� N ��ÿһ�ֲ�ͬ�����֣��� D��M �ĸ�ʽ��һ���������λ���� D ������ N �г��ֵĴ���M��Ҫ��D �����������
//��������
//100311
//�������
//0:2
//1 : 3
//3 : 1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num[10] = { 0 };
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		num[n % 10]++;
//		n /= 10;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (num[i] != 0)
//		{
//			printf("%d:%d\n", i, num[i]);
//		}
//	}
//	return 0;
//}

//��ʽ��ֵ
//����f(n)�ı��ʽ����ͼ��ʾ������һ������n������f(n)��ֵ��
//����˵��
//����һ������n��0<n<100����
//���˵��
//�������n��Ӧ��f(n)��
//��������
//3
//�������
//8
#include <stdio.h>
#include <math.h>
int value(int n)
{
	return n*(n + 1)*pow(-1, n - 1);
}
int main()
{
	int sum = 0;
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += value(i);
	}
	printf("%d\n", sum);
	return 0;
}