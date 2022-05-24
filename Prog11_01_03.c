#include<stdio.h>

struct Real{
	int p,q;
};
struct Imaginary{
	int r,s;
};

int add(int a , int b, int c, int d){
	struct Real myReal;
	struct Imaginary myImaginary;
	int result1, result2;
	
	myReal.p = a; 
	myImaginary.r = b;
	
	myReal.q = c;
	myImaginary.s =d;
	
	result1 = myReal.p + myReal.q;
	result2 = myImaginary.r + myImaginary.s;
	
	printf("\n(%d) + (%d)i", result1, result2);
}

int multiply(int a, int b, int c, int d){
	struct Real myReal;
	struct Imaginary myImaginary;
	int result1, result2;
	
	myReal.p = a; 
	myImaginary.r = b;
	
	myReal.q = c;
	myImaginary.s =d;
	
	result1 = (myReal.p * myReal.q) - (myImaginary.r * myImaginary.s);
	result2 =   (myReal.p * myReal.q) + (myImaginary.r * myImaginary.s) ;
	
	printf("\n(%d) + (%d)i", result1, result2);
}

int main(){
	int a,b,c,d;
	printf("\n Enter first complex number : ");
	scanf("%d %d", &a,&b);
	printf("%d + (%d)i", a,b );
	printf("\n Enter second complex number : ");
	scanf("%d %d", &c,&d);
	printf("%d + (%d)i", c,d );
	printf("\n=========RESULT===========");
	printf("\nCOMPLEX ADDITION \n");
	add(a,b,c,d);
	printf("\nCOMPLEX MULTIPLICATION \n");
	multiply(a,b,c,d);
	
}
