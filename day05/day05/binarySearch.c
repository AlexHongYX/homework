//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int binarySearch(int arr[], int, int, int);
//
//int main(){
//
//	int arr[] = {0,2,5,9,11,15,18,24,28};
//	int input = 0;
//	int key = 0;
//	int result = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &key);
//	result = binarySearch(arr, key,left,right);
//	printf("The subscript is %d\n", result);
//	return 0;
//}
//
//int binarySearch(int arr[], int key, int left, int right){
//	int mid = 0;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (key<arr[mid]){
//			right = mid - 1;
//		}
//		else if (key>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}