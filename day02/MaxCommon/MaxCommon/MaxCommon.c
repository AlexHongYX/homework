#define _CRT_SECURE_NO_WARNINGS 1
//շת�����
//1.���b=0�����������a�������Լ����
//2.���򣬼���a����b����������a����b����b�����Ǹ�������
//3.�ص���һ���� 
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