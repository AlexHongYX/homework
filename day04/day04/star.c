//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
////上半部分:n-i个空格，2*i-1个星星
//
//int main()
//{
//	int i, j;
//	int n;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++){
//		for (j = 0; j < n - i; j++){
//			putchar(' ');
//		}
//
//		for (j = 0; j < 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//
//	for (i = n-1; i > 0; i--){
//		for (j = 0; j < n - i; j++){
//			putchar(' ');
//		}
//
//		for (j = 0; j < 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//
//	return 0;
//}