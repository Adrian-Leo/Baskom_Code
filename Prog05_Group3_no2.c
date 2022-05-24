#include<stdio.h>

int main(){
 int input, freq1=0,freq2=0,freq3=0,invalid=0;
 int counter =0;
 int inputCount;
 printf("Input Counter : ");
 scanf("%d", &inputCount);
 while(counter < inputCount){
	  counter ++;
	  printf("Enter Number from 1-3 : ");
	  scanf("%d", &input);
	  if(input == 1){
	      freq1 += 1;
	     }
	  else if(input == 2){
	      freq2 += 1;
	     }
	  else if(input == 3){
	      freq3 += 1;
	  }
	  else{
	   	  invalid += 1;
	      printf("INVALID NUMBER \n");
	  }
 }
 printf("\n Frekuensi Angka 1 : %d \n", freq1);
 printf("Frekuensi Angka 2 : %d \n", freq2);
 printf("Frekuensi Angka 3 : %d \n", freq3);
 printf("Angka selain 1-3 : %d \n", invalid);
 
}
