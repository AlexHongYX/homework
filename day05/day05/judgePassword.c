#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main(){
	int count = 0;
	char password[] = "password";
	char input[20] = "";
	for (count = 0; count < 3; count++){
		printf("please input password:\n");
		scanf("%s", input);
		if (strcmp(input, password) == 0){
			printf("login success!\n");
			break;
		}
		else{
			printf("error password,");
		}
	}
	if (count == 3){
		printf("exit program\n");
	}
	return 0;
}