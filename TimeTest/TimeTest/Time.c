#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main(){
	//һ��ʽ���������ٷ�����
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

		ֻ��Ҫ��һ��tmp = tmp*10 + m;
	*/

	//����һЩת���ַ���ʹ�ã�����Ҫע��\328,�˽����в������8��0-7��������\32����\032�İ˽���ת���ַ�
	//8����һ���������ַ���\0ֻ����Ϊ������־����ռ���ַ�������
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
}