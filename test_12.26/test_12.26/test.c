#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isprime(int a)
{
	int j = 0;
	for (j = 2; j <= a / 2; j++)
	{
		if (a%j == 0)
			break;
		else if (j == a / 2)
			return 1;
	}
	return 0;
}
int main()
{
	int i = 100, cnt = 0;
	for (i = 100; i<1000; i++)
	{
		if (isprime(i) == 1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
