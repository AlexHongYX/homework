#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
////逆序所给字符串，函数将其逆序
//void reverse_word(char arr[], int len){
//	int i = 0;
//	
//	for (i = 0; i < len / 2; i++){
//		char tmp;
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = tmp;
//	}
//
//	/*for (i = 0; i < len; i++){
//		printf("%c", arr[i]);
//	}*/
//}
//
//int main(){
//
//	int i = 0;
//	int j = 0;
//	int len = 0;
//	char arr[50] = "student a am i";
//	char tmp[50];
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		if (arr[i] == '\0'){
//			len = i;
//			break;
//		}
//	}
//	reverse_word(arr, len);
//	
//	//部分逆置问题解决不了
//	for (i = 0; i < len; i++){		
//		
//		if (arr[i] == ' '||i==len-1){
//			reverse_word(tmp, j);
//			j = 0;
//		}
//		else{
//			tmp[j] = arr[i];
//			j++;
//		}	
//	}
//
//	for (i = 0; i < len; i++){
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}
//
//

////单词逆序+整段逆序   /  整段逆序+单词逆序
////不用库函数最经典的操作
//	//逆序所给字符串，函数将其逆序
//	//void reverse_part(char* start, char* end)
//	void reverse_part(char* str, int start, int end){
//		int i, j;
//		char tmp;
//		for (i = start, j = end; i < j; i++, j--){
//			tmp = str[i];
//			str[i] = str[j];
//			str[j] = tmp;
//		}
//	}
//
//	int main(){
//
//		char src[] = "I'm a fashion student";
//		int i;
//		int start = 0;
//		int end;
//
//		//将字符串分段，不停刷新start和end
//		for (i = 0; src[i]; i++){
//			if (src[i] == ' '){
//				//end是空格前面的那个位置
//				end = i-1;
//				reverse_part(src, start, end);
//				//start是空格后面的那个位置
//				start = i + 1;
//			}
//		}
//		//逆置最后一个单词
//		reverse_part(src, start, i-1);
//
//		//逆置整体
//		reverse_part(src, 0, i - 1);
//		puts(src);
//
//		return 0;
//	}

////找个二维数组，先拆成4个逆置再拼接起来，先strcpy再strcat
//全用库函数——拼接法
#include<string.h>
void reverse(char *src){
	char *p;
	char tmp[256] = { 0 };
	while (p = strrchr(src, ' ')){

		//最后一个空格位置为\0
		*p = 0;
		//把空格后面的全移动到tmp中
		strcat(tmp, p + 1);
		//补一个空格
		strcat(tmp, " ");
	}
	//把src剩下的最后一个单词直接移到tmp，没空格了
	strcat(tmp, src);
	//tmp覆盖src
	strcpy(src, tmp);
}

int main(){

	char src[] = "I'm a fashion student";
	reverse(src);
	puts(src);
	return 0;


}