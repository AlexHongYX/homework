#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(){
	int a=0, b=0;
	scanf("%d %d", &a, &b);
	printf("before change:a=%d,b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after change:a=%d,b=%d\n", a, b);
	return 0;
}