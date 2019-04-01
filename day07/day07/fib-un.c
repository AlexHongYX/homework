//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int fib(int n){
//	
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	else{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		int i = 0;
//		for (i = 3; i <= n; i++){
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	
//}
//
//int main(){
//
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}