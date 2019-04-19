//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////简短写法
////unsigned int reverse_bit(unsigned int value){
////
////	int i = 0;
////	unsigned int tmp = 0;
////	unsigned int ret = 0;
////	注意：32位移动31次就行了，因为最后一次把ret和tmp|一下，不用再移了，value已经到达第一位，ret已经完成
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
//数位遍历写法
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
////更简短写法
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
