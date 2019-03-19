#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, flag;
	for (j = 100; j <= 200; j++){
		flag = 0;
		for (i = 2; i <= j - 1; i++){
			if (j%i == 0){
				flag = 1;
				break;
			}
			
		}
		if (flag){
			printf("no:%d\n", j);
		}
		else{
			printf("yes:%d\n", j);
		}
		
	}
	system("pause");
	return 0;
}
//extern int g_val;
//extern int Add(int, int);
//
//int main(){
//	int x = 0;
//	x = Add(1, 2);
//	printf("%d\n", x);
//	return 0;
//}

//void test(){
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main(){
//
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		test();
//	}
//	
//	return 0;
//}