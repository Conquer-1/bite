#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
int main()
{
	char input[20] = { 0 };//�洢����
	//�ػ�
	//system()-ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ע�⣺��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//%s-�ַ���
	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ������� strcmp-string compare
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������\n");
		goto again;
	}
	return 0;
}
