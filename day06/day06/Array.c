#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int init(int arr[]){
	int i = 0;
	printf("input 10 numbers:\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	return i;
}

void empty(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		arr[i] = 0;
	}
}

void PrintArray(int arr[],int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz){

	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < sz; i++){
		a[i] = arr[sz - 1 - i];
	}
	PrintArray(a, sz);
}

int main(){

	int arr[10] = {0};
	int input = 0;
	int sz = 0;
	
	sz = init(arr);
	printf("after init:\n");
	PrintArray(arr,sz);

	printf("empty array to 1 or reverse array to 2:\n");
	scanf("%d", &input);
	if (input == 1){
		empty(arr,sz);
		printf("after empty:\n");
		PrintArray(arr, sz);
	}
	else{
		reverse(arr,sz);
	}
	return 0;
}