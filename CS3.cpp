#include<stdio.h>

int stars;

int main(){
	printf("How many * do you want ? : ");
	scanf("%d", &stars);
	for(int i=1 ; i <= stars; i++){
		printf("*");
	}

}
