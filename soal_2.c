#include<stdio.h>
int main(){
 int p,w,t;
 int finalPrice;
 printf("Enter the weight: ");
 scanf("%d", &w );
 printf("\n Enter the price: ");
 scanf("%d", &p );
 printf("\n Enter the time: ");
 scanf("%d", &t );	
 finalPrice=  P+(p*(w>40)*0.15)-(p*(t>60)*0.15);
 printf("the final price is %d " , finalPrice );


 
}
