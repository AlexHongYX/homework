#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(int n){

	if (n>0){
		
		/*�Ƚ�����ӡ*/
		print(n / 10);
		printf("%d ", n % 10);

		//��Ϊ16����
		//printf("%c", "0123456789ABCDEF"[n%sn]);
	}
	
}

int main(){

	int n = 0;
	
	scanf("%d", &n);
	
	print(n);
	
	return 0;

}