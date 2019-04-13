//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int count_one_bits(unsigned int value){
//	int i=0;
//	int count = 0;
//	for (i = 0; i < 32;i++){
//		if ((value>>i)&1){
//			++count;
//		}
//	}
//	return count;
//}
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