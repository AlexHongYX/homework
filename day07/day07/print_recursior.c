#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(int n){

	if (n>0){
		
		/*先进入后打印*/
		print(n / 10);
		printf("%d ", n % 10);

		//改为16进制
		//printf("%c", "0123456789ABCDEF"[n%sn]);
	}
	
}

int main(){

	int n = 0;
	
	scanf("%d", &n);
	
	print(n);
	
	return 0;

}