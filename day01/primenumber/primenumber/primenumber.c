#include<stdio.h>
#include<math.h>

int IsPrime(int);

int main(){
	int i;
	for (i = 100; i <= 200; i++){
		if (IsPrime(i) == 1){
			printf("%d\n", i);
		}
	}
}

int IsPrime(int i){
	int j;
	for (j = 2; j <= sqrt(i); j++){
		if (i%j == 0){
			return 0;
		}
	}
	return 1;
}
