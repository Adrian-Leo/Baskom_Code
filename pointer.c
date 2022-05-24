#include<stdio.h>

void multiply(int *x , int*y){
	int result;
	
	result = *x * *y;
	printf("result is : %d ",result);
}

int main(void) {

	int a, b;
	
	printf("Input first number :");
	scanf("%d", &a);
	printf("Input second number : ");
	scanf("%d", &b);
	
	printf("%d X %d \n", a , b);
	
	multiply(&a,&b);
	
    return 0;	
}

    
//  // string variable
//  char str[6] = "Hello";
//  
//  // pointer variable
//  char *ptr = str;
// 
//  // print the string
//  while(*ptr != '\0') {
//    printf("\n %c", *ptr);
//     printf("\n %c", ptr);
//    // move the ptr pointer to the next memory location
//    ptr++;
//  }
//  
//   char *strPtr = "check";
//  
//  // temporary pointer variable
//  char *t = strPtr;
//  
//  // print the string
//  while(*t != '\0') {
//    printf("%c", *t);
//    printf("\n %d", &t);
//    
//    // move the t pointer to the next memory location
//    t++;
//  }
//  
//  int * const ptr1 =2;
//const int * ptr2 = 2;
//
//
//printf("%d\n", &ptr1);
//printf("%d", &ptr2);

//	int x, *p = NULL;
//	
//	x = 10; 
//	p = &x;
//	printf("%d", &p);
//	
//
//  
//  return 0;
