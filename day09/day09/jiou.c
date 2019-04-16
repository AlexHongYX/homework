#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(){

	int input = 0;
	int i = 0;
	int count = 1;
	int arr[32] = { 0 };
	int even[16] = { 0 };
	int odd[16] = { 0 };
	scanf("%d", &input);
	/*for (i = 0; i<32 ; i++){
		arr[i] = (input & 1);
		input = (input >> 1);
	}*/
	//加强版——直接顺序——最简单
	//偶数
	//for (i = 31; i >= 0; i -= 2){
	//	putchar((n >> i & 1) + '0');
	//}
	////奇数
	//for (i = 30; i >= 0; i -= 2){
	//	putchar((n >> i & 1) + '0');
	//}
	//测试打印
	/*for (i = 0; i < 32; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");*/
								//保底做法
								//直接倒着存
								/*for (i = 31; i >= 0; i--){
									arr[i] = (input & 1);
									input = (input >> 1);
								}
								//直接把arr的奇偶打出来，不用存
								//奇数
								/*for (i = 0; num[i]; i += 2){
								putchar(num[i]);
								}*/
				///*show time*/
				////input/=4 ->每次去掉后两位
				//int tmp = input;
				//for (i = 31; i >= 0; i -= 2, input /= 4){
				//	num[i / 2] = n % 2 + '0';
				//}
				//puts(num);
				////先把最后一位去掉，才能从奇数位的最后开始遍历
				//input = tmp / 2;
				//for (i = 30; i >= 0; i -= 2, tmp /= 4){
				//	num[i / 2] = tmp % 2 + '0';
				//}
				//puts(num);
	

	
	for (i = 0; i < 32; i+=2){
		odd[16 - count] = arr[i];	
		even[16 - count] = arr[i+1];
		count++;
	}
	
	printf("奇数位（从右向左为1-31）：\n");
	for (i = 0; i < 16; i++){
		
		printf("%d ", odd[i]);
		
	}
	printf("\n");
	printf("偶数位（从右向左为2-32）：\n");

	for (i = 0; i < 16; i++){
		printf("%d ", even[i]);

	}
	printf("\n");

	return 0;
}