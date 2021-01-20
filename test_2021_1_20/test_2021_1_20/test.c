#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define maxsize 14 //站点和线路名称字符串的最大长度 
//int zs = 0;//当前总站点数 
//int zsl = 0;//当前总线路数 
//int m = 6;//文件读取站点数 
//int n = 5;//文件读取线路数 
//
//struct station{
//	int num;//站序号
//	char name[maxsize];//站名称 
//}stop[50];
//
//struct busline{//公交线路 
//	int blnum;//线路编号
//	char blname[maxsize];//线路名称 
//	struct station blstop[50];
//	int sum;//线路中站点数量 
//}BL[20];
//
////文件中站点和线路信息读取 
//void read()
//{
//	int i, j;
//	FILE* fp1;
//	FILE* fp2;
//	fp1 = fopen("公交站点.txt", "r+");
//	fp2 = fopen("公交线路.txt", "r+");
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
////主菜单显示界面 
//void menu()
//{
//	printf("\n\n");
//	printf("\t\t=======公交线路管理系统=======\n");
//	printf("\t\t1显示全部站点信息\n");
//	printf("\t\t2新增公交站点\n");
//	printf("\t\t3修改公交站点\n");
//	printf("\t\t4新增公交路线\n");
//	printf("\t\t5调整公交路线\n");
//	printf("\t\t6查询公交路线\n");
//	printf("\t\t7显示全部线路\n");
//	printf("\t\t8清理屏幕\n");
//	printf("\t\t9退出\n");
//}
//
////建立新站点 
//void createstation()
//{
//	if (zs == 50) printf("站点数量已满\n");
//	else
//	{
//		printf("请输入增加站点的名称：");
//		scanf("%s", &stop[zs].name);
//		stop[zs].num = zs + 1;
//		zs++;
//	}
//}
//
////修改站点信息 
//void modifystation()
//{
//	int a;
//	char newname[maxsize];
//	printf("请输入需要修改的站点编号：");
//	scanf("%d", &a);
//	if (stop[a - 1].num == a)
//	{
//		printf("%s\n", stop[a - 1].name);
//		printf("请输入站点的新名称：");
//		for (int z = 0; z<maxsize; z++)
//		{
//			stop[a - 1].name[z] = ' ';
//		}
//		scanf("%s", &stop[a - 1].name);
//	}
//	else
//		printf("该站点不存在！\n");
//}
//
////显示全部站点 
//void printstation()
//{
//	for (int i = 0; i<zs; i++)
//	{
//		printf("%d %s\n", stop[i].num, stop[i].name);
//	}
//}
//
////新建公交线路 
//void createbusline()
//{
//	int a, b;
//	if (zsl == 20) printf("路线数量已满！\n");
//	else
//	{
//		printf("请输入新增线路的名称：");
//		scanf("%s", &BL[zsl].blname);
//		printf("请输入线路起始站编号：");
//		scanf("%d", &a);
//		if (a>zs) printf("线路起始站编号错误！");
//		else
//		{
//			printf("请输入线路终点站编号：");
//			scanf("%d", &b);
//			if (b>zs || b == a) printf("线路终点站编号错误！");
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
////调整公交线路 
//void adjustline()
//{
//	int a, b, c;
//	printf("请输入需要调整的线路编号：");
//	scanf("%d", &a);
//	if (a>zsl)
//		printf("该线路不存在！\n");
//	else
//	{
//		printf("请输入新增站点的编号：");
//		scanf("%d", &b);
//		if (b>zs)
//			printf("该站点不存在！\n");
//		else
//		{
//			printf("请输入该站点在线路中所处的位置：");
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
//				printf("站次位置有误！\n");
//		}
//	}
//}
//
////输出所有公交线路 
//void printbusline()
//{
//	for (int i = 0; i<20; i++)
//	{
//		if (BL[i].blnum == i + 1)
//		{
//			printf("%d", BL[i].blnum);//线路编号 
//			printf("%s", BL[i].blname);//线路名称 
//			printf("\t\t总站次数为：%d站。\n", BL[i].sum);
//		}
//	}
//}
//
////查询具体公交线路及途径站点信息 
//void inquireline()
//{
//	int a;
//	printf("请输入需要查询的线路编号：");
//	scanf("%d", &a);
//	if (BL[a - 1].blnum == a)
//	{
//		for (int i = 0; i<BL[a - 1].sum; i++)//输出整条线路途经车站 
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
////清理屏幕
//void clear()
//{
//	system("cls");
//	menu();
//}
//
////主函数 
//int main()
//{
//	read();
//	int i;
//	menu();
//	printf("请输入需要进行的操作的编号：");
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
//		default:printf("操作编号输入错误！\n"); break;
//		}
//		printf("请输入需要进行的操作的编号：");
//	}
//	return 0;
//}
//

//字串统计
//输入两个字符串，分别称为母串和子串。统计子串在母串中出现的次数和位置。注意子串可以重叠，见输入样例2。
//输入说明
//输入分为两行，第一行为母串，第二行为子串。母串和子串的长度都不超过100。
//输出说明
//输出子串在母串中出现的次数，并按出现次序输出每次子串在母串中出现时，子串第一个字符在母串中的位置（位置从0开始计算）。
//输入样例
//输入样例1：
//12312431235412
//123
//输入样例2：
//12121212
//1212
//输出样例
//输出样例1：
//2 0 7
//输出样例2：
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

//数位统计
//给定一个不超过10 位的非负整数 N，请编写程序统计该整数各个数位上不同数字出现的次数。
//例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。
//输入说明
//输入是一个不超过 10位的非负整数 N。
//输出说明
//对 N 中每一种不同的数字，以 D：M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数M，要求按D 的升序输出。
//输入样例
//100311
//输出样例
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

//公式求值
//函数f(n)的表达式如下图所示，给出一个整数n，求函数f(n)的值。
//输入说明
//输入一个整数n（0<n<100）。
//输出说明
//输出整数n对应的f(n)。
//输入样例
//3
//输出样例
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