#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define MAX(x,y)(x>y)?(x):(y)

int main(){
	char ch = 'w';
	char* p = &ch;
	*p = 'a';
	printf(ch);
	return 0;
}