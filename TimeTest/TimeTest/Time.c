#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main(){
	//一个式子求数，百发百中
	/*int i;
	int sum=1;
	int tmp = 0;
	for (i = 1; i < 10; i++){
		tmp *= i;
		sum += tmp;
	}
	printf("%d\n", sum);*/
	/*
		m=4 n=3
			4 + 44 + 444
		m=2 n=5
			2 + 22 + 222 + 2222 + 22222

		只需要改一下tmp = tmp*10 + m;
	*/

	//测试一些转义字符的使用，尤其要注意\328,八进制中不会出现8（0-7），所有\32代表\032的八进制转义字符
	//8代表一个独立的字符，\0只是作为结束标志，不占用字符串长度
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
}