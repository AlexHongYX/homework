//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main(){
//
//	int arr[32] = { 0 };	
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d", &input);
//
//	for (i = input, j = 0; input; input /= 10){
//
//		i = input % 10;
//		arr[j++] = i;
//	}
//
//	for (k = j - 1; k >= 0; k--){
//		printf("%d ", arr[k]);
//	}
//	printf("\n");
//
//	return 0;
//}