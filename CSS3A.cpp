#include<stdio.h>

int num;

int main(){
	printf("Input number : ");
	scanf("%c",&num);
	switch(num){
		case 0 :
			printf("zero \n");
		break;
		case -1 : 
			printf("minus one \n");
		break;
		case 1 :
			printf("one \n");
		break;
		default : 
			printf("other");
		break; 
	}		
}
