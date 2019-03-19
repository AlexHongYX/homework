#include<stdio.h>

int isLeap(int);

int main(){
	int year;
	for (year = 1000; year <= 2000; year++){
		if (isLeap(year)){
			printf("%d\n", year);
		}
	}
}

int isLeap(int year){
	if ((year%400==0)||(year%4==0&&year%100!=0))
	{
		return 1;
	}
	else{
		return 0;
	}
}