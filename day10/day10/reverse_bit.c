//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////���д��
////unsigned int reverse_bit(unsigned int value){
////
////	int i = 0;
////	unsigned int tmp = 0;
////	unsigned int ret = 0;
////	ע�⣺32λ�ƶ�31�ξ����ˣ���Ϊ���һ�ΰ�ret��tmp|һ�£����������ˣ�value�Ѿ������һλ��ret�Ѿ����
////	for (i = 0; i < 31; i++){
////		tmp = value &1;
////		ret = ret | tmp;
//////		printf("%x\n", ret);
////		value = value >> 1;
////		ret = ret << 1;
////	}
////	
////	return ret;
////}
//
//��λ����д��
//unsigned int reverse_bit(unsigned int value){
//	int i;
//	int tmp;
//	int sum=0;
//	for (i = 0; i < 32; i++, value /= 2){
//		tmp = value % 2;
//		sum = sum * 2 + tmp;
//	}
//	return sum;
//}
//
////�����д��
//unsigned int reverse_bit(unsigned int value){
//	int i;
//	int tmp;
//	int sum=0;
//	for (i = 0; i < 32; i++, value /= 2){
//		tmp = value % 2;
//		sum = sum * 2 + tmp;
//	}
//	return sum;
//}
//
//int main(){
//
//	unsigned int input = 0;
//	unsigned int ret = 0;
//	
//	scanf("%u", &input);
//	
//	ret = reverse_bit(input);
//
//	printf("%u\n", ret);
//
//	return 0;
//}
//
