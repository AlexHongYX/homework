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
////最简单写法
//int count_one_bits(unsigned int value){
//	int count = 0;
//	//每次把二进制中某一位（最后一个1的位置）的1与掉
//	//二进制只有0/1两个数，&有0则0
//	//最快的，有几个1循环几次
//	/*
//		1100 & 1011 -> 1000
//		1000 & 0111 -> 0000
//		两次跳出来
//	*/
//	while (value &= value - 1){
//		count++;
//	}
//	return count;
//}
//
////标准做法（数位遍历）
////int count_one_bits(unsigned int value){
////	int i;
////	int count = 0;
////	for (i = value; i; i /= 2){
////		//结果要么是0，要么是1
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