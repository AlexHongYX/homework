#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void reverse(int a[3]);
void swop(int*, int*);

int main(){
	int a[3],i;
	for (i = 0; i < 3; i++){
		scanf("%d", &a[i]);
	}
	reverse(a);
	return 0;
}

void reverse(int a[3]){
	int i,j,t;
	for (i = 0; i < 3; i++){
		for (j = i + 1; j < 3; j++){
			if (a[j]>a[i]){
				swop(&a[j], &a[i]);
			}
		}
	}
	for (i = 0; i < 3; i++){
		printf("%d\n", a[i]);
	}
}

void swop(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}