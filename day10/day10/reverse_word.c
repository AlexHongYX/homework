#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
////���������ַ�����������������
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
//	//������������������
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

////��������+��������   /  ��������+��������
////���ÿ⺯�����Ĳ���
//	//���������ַ�����������������
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
//		//���ַ����ֶΣ���ͣˢ��start��end
//		for (i = 0; src[i]; i++){
//			if (src[i] == ' '){
//				//end�ǿո�ǰ����Ǹ�λ��
//				end = i-1;
//				reverse_part(src, start, end);
//				//start�ǿո������Ǹ�λ��
//				start = i + 1;
//			}
//		}
//		//�������һ������
//		reverse_part(src, start, i-1);
//
//		//��������
//		reverse_part(src, 0, i - 1);
//		puts(src);
//
//		return 0;
//	}

////�Ҹ���ά���飬�Ȳ��4��������ƴ����������strcpy��strcat
//ȫ�ÿ⺯������ƴ�ӷ�
#include<string.h>
void reverse(char *src){
	char *p;
	char tmp[256] = { 0 };
	while (p = strrchr(src, ' ')){

		//���һ���ո�λ��Ϊ\0
		*p = 0;
		//�ѿո�����ȫ�ƶ���tmp��
		strcat(tmp, p + 1);
		//��һ���ո�
		strcat(tmp, " ");
	}
	//��srcʣ�µ����һ������ֱ���Ƶ�tmp��û�ո���
	strcat(tmp, src);
	//tmp����src
	strcpy(src, tmp);
}

int main(){

	char src[] = "I'm a fashion student";
	reverse(src);
	puts(src);
	return 0;


}