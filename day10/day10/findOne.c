#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int findOne(int arr[], int sz){
	int i = 0;

}

int main(){

	int arr[11] = { 2, 2, 3, 3, 9, 9, 4, 4, 5, 8, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;

	ret = findOne(arr,sz);
	printf("%d\n", ret);

	return 0;
}