#include<stdio.h>

int input,number,freq1 = 0,freq2 = 0,freq3 = 0,counter=1, increment1 =1,increment2=1,increment3=1;

int main(){
	printf("Number of input : ");
	scanf("%d" , &input);
	
	do{
		printf("input number :");
		scanf("%d",&number);
		if(number == 1){
			freq1 += 1;
		}
		else if(number == 2){
			freq2 += 1;
		}
		else if(number == 3){
			freq3 += 1;
		}
		else{
			printf("\n Invalid number \n");
		}
	counter++;
	}
	while(counter <= input);
	
	
	printf("Histogram of data \n");
	printf("1 : ");
	do{
		printf("#");
		increment1++;
	}
	while(increment1 <= freq1);
	printf("\n 2 : ");
	do{
		printf("#");
		increment2++;	
	}
	while(increment2 <= freq2);
	printf("\n 3: ");
	do{
		printf("#");
		increment3++;
	}
	while(increment3 <= freq3);
} 	
