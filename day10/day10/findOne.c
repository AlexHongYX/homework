//#define _CRT_SECURE_NO_WARNINGS 1
//
//#define SIZE(a) sizeof(a)/sizeof(a[0])
//
//#include<stdio.h>
//
//一个数对另一个数两次按位异或的结果还是原始值
//异或两次相当于没异或，而且异或没有顺序，1^5^1^3^2^5^2 = 3
//int findOne(int arr[], int sz){
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++){
//		ret = ret ^ arr[i];
//	}
//	return ret;
//}
//
//int main(){
//
//	int arr[11] = { 2, 2, 3, 3, 9, 9,7, 4, 4, 8, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//
//	ret = findOne(arr,sz);
//	printf("%d\n", ret);
//
//	return 0;
//}