#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int maxnumber(int a[10]);

int main(){
	int a[10], i,max;
	printf("input 10 integer:\n");
	for (i = 0; i <10; i++){
		scanf("%d", &a[i]);
	}
	max = maxnumber(a);
	printf("%d\n", max);
	return 0;
}

int maxnumber(int a[10]){
	int max, i;
	max = a[0];
	for (i = 1; i < 10; i++){
		if (a[i]>max){
			max = a[i];
		}
	}
	return max;
}