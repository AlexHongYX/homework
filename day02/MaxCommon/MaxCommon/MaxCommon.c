#define _CRT_SECURE_NO_WARNINGS 1
//辗转相除法
//1.如果b=0，计算结束，a就是最大公约数。
//2.否则，计算a除以b的余数，让a等于b，而b等于那个余数。
//3.回到第一步。 
//a	  b   t
//12  18  12
//18  12  6
//12  6   0
//6   0   
#include<stdio.h>

int common(int, int);

int main(){
	int a, b,t;
	scanf("%d %d", &a, &b);
	t = common(a, b);
	printf("max common:%d\n", t);
	return 0;
}

int common(int a, int b){
	int t;
	while (b != 0){
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}