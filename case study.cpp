#include<stdio.h>
int main(){
 float phi =3.14 ;
 int radius,height;
 double Acylinder;
 printf("Enter the radius: ");
 scanf("%d", &radius );
 printf("\n Enter the height: ");
 scanf("%d", &height );
 Acylinder = 2*phi*radius*radius + 2*phi*radius*height;
 printf("the result is : %f ", Acylinder);
 return 0;
 
}
