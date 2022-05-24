#include<stdio.h>
#include<string.h>

//initialize struct
//struct Number{
//	float x;
//	float y;
//};
//
//void divide(float a, float b){
//	float result;
//	struct Number myNumber;
//	myNumber.x = a;
//	myNumber.y = b;
//	
//	result = myNumber.x / myNumber.y;
//	printf("\n Hasil Pembagian : %0.2f ", result );
//	
//}

struct Point{
	int x,y; 
};

int main(){
//	float c,d;
//	printf("\n Masukkan X : ");
//	scanf("%f", &c);
//	printf("\n Masukkan Y : ");
//	scanf("%f",&d);
//	
//	divide(c,d);
	
	struct Point p1 = {
		1,2
	};	
	
	struct Point *p2 = &p1;
	
	printf("%d %d", p2->x,p2->y);
	return 0;
}


