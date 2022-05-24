#include<stdio.h>
int main(){
	int arraySize ,n, sum, index =1,i;
	float average;
	
	printf("Input Size of array : ");
	scanf("%d", &n);
	int array[n];
	
	int length = sizeof(array) / sizeof(array[0]);
	
	for(i=0 ; i < length ; i++){
		printf("\n Input Number %d : ", index);
		scanf("%d", &n);
		sum += n;
		index += 1;
	}
	average = (float)sum / (float)length ;
	printf("\n The Average is : %0.2f ", average); 
}

