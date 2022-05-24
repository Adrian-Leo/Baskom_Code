#include<stdio.h>

int dummy(int array[],int n,int length){
	int dummy[length];
	int i;
	for(i =0; i < length; i++){
		dummy[i] = array[length - i + 1];		
	}
	printf(" Dummy array : ");
	for(i =0 ; i < length ; i++){
		array[i] = dummy[i];
		printf("%d", array[i]);
	}
	
	
}

int swap(int arr[],int length ){
	printf("\n reversed array : ");
	int aux[length],i, tempVar ;
 	for(i=0; i = length / 2 ; i++){
 		tempVar = arr[i];
 		arr[i] = arr[length-i+1];
 		arr[length-i+1] = tempVar;
	 }
     for (i = 0; i < length; i++) {
        printf(" %d " , arr[i]);
    }
}


int main(){
	int n;
	
	printf("Input Size of Array : ");
	scanf("%d", &n);
	int array[n];
	
	int length = sizeof(array) / sizeof(array[0]);
	
	int index =1,i, j;

	for(i=0 ; i < length ; i++){
		printf("\n Input Number %d : ", index);
		scanf("%d", &array[i]);
		index += 1;		
	}
	
	dummy(array,n,length);
	swap(array,n);
	
}
