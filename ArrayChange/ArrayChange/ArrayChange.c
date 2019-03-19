#define _CRT_SECURE_NO_WARNINGS 1

// 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
#include<stdio.h>

void swapAB(int* a, int* b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main(){

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	printf("before change,a:");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\nbefore change,b:");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\n");

	//change a,b
	for (i = 0; i < 10; i++){
		swapAB(&a[i], &b[i]);
	}

	printf("\nafter change,a:");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\nafter change,b:");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
}