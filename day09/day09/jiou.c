//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main(){
//
//	int input = 0;
//	int i = 0;
//	int count = 1;
//	int arr[32] = { 0 };
//	int even[16] = { 0 };
//	int odd[16] = { 0 };
//	scanf("%d", &input);
//	for (i = 0; i<32 ; i++){
//		arr[i] = (input & 1);
//		input = (input >> 1);
//	}
//	/*for (i = 0; i < 32; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");*/
//	for (i = 0; i < 32; i+=2){
//		odd[16 - count] = arr[i];	
//		even[16 - count] = arr[i+1];
//		count++;
//	}
//	
//	printf("����λ����������Ϊ1-31����\n");
//	for (i = 0; i < 16; i++){
//		
//		printf("%d ", odd[i]);
//		
//	}
//	printf("\n");
//	printf("ż��λ����������Ϊ2-32����\n");
//
//	for (i = 0; i < 16; i++){
//		printf("%d ", even[i]);
//
//	}
//	printf("\n");
//
//	return 0;
//}