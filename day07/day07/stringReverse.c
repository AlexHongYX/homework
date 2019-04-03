#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>




int main(){

	char arr[100] = { 0 };
	char* ret = NULL;
	scanf("%s", arr);

	int sz = sizeof(arr) / sizeof(arr[0]);

	reverse_string(arr,sz);

	printf("%s\n", arr);

	return 0;
}