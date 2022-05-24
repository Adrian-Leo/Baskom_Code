#include<stdio.h>

int input,number,freq1 = 0,freq2 = 0,freq3 = 0;

int main(){
	printf("Number of input : ");
	scanf("%d" , &input);
	
	for(int i=0 ; i < input ; i++){
		printf("input number :");
		scanf("%d",&number);
		switch(number){
			case 1 : 
			freq1 += 1;
			break;
			case 2 :
			freq2 += 1;
			break; 
			case 3 : 
			freq3 += 1;
			break; 
			default :
			printf("\n Invalid Input");
			break;
		}	
	}
	printf("Histogram of data \n");
	printf("1 : ");
	for(int j=0; j < freq1; j++){
		printf("#");
	}
	printf("\n 2 : ");
	for(int k=0; k < freq2; k++){
		printf("#");	
	}
	printf("\n 3: ");
	for(int l=0; l < freq3; l++){
		printf("#");
	}
	
	
}
