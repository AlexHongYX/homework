#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{

	int i = 0;
	int n = 0,m=0;
	int t = 0;
	int sum = 0;

	scanf("%d%d", &n,&m);

	for (i = 0; i < m; i++)
	{
		t = t * 10 + n;
		sum += t;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}