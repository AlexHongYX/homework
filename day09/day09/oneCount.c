//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int count_one_bits(unsigned int value){
//	int i=0;
//	int count = 0;
//	for (i = 0; i < 32;i++){
//		if (value & 1 << i){
//			++count;
//		}
//	}
//	return count;
//}
//
////���д��
//int count_one_bits(unsigned int value){
//	int count = 0;
//	//ÿ�ΰѶ�������ĳһλ�����һ��1��λ�ã���1���
//	//������ֻ��0/1��������&��0��0
//	//���ģ��м���1ѭ������
//	/*
//		1100 & 1011 -> 1000
//		1000 & 0111 -> 0000
//		����������
//	*/
//	while (value &= value - 1){
//		count++;
//	}
//	return count;
//}
//
////��׼��������λ������
////int count_one_bits(unsigned int value){
////	int i;
////	int count = 0;
////	for (i = value; i; i /= 2){
////		//���Ҫô��0��Ҫô��1
////		count += i % 2;
////
////		/*if (i % 2){
////			++count;
////		}*/
////	}
////	return count;
////}
//
//int main(){
//	
//	int ret = 0;
//	unsigned int input = 0;
//	scanf("%u", &input);
//
//	ret = count_one_bits(input);
//	printf("%d\n", ret);
//	return 0;
//}