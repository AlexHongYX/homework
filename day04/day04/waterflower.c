#define _CRT_SECURE_NO_WARNINGS 1
//ˮ�ɻ�������ķ˹��������
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int count = 0;
	int tmp[10] = { 0 };
	int sum = 0;

	for (i = 1; i <= 1000000; i++){
		
		for (j = i; j; j /= 10){  //��λ����
			tmp[count] = j % 10;
			count++;
		}

		for (j = 0; j < count; j++){
			sum += pow(tmp[j], count);
		}

		if (i == sum){
			printf("%d\n", i);
		}

		//ÿ��ѭ���������Ϊ0
		count = 0;
		sum = 0; 
	}

	system("pause");
	return 0;
}