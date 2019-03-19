#include<stdio.h>

void change(int*, int*);

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("before change:a=%d,b=%d\n", a, b);
	change(&a, &b);
	printf("after change:a=%d,b=%d\n", a, b);
	return 0;
}

void change(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}