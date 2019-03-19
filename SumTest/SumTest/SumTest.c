#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(){
	int i;
	double t=0.0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++){
		t = 1.0 / i;
		if (i % 2 == 0){
			sum -= t;
		}
		else{
			sum += t;
		}
	}
	printf("%lf\n", sum);
	return 0;
}