
#include <stdio.h>
int main (){

int n;
printf("Number :");
scanf ("%d", &n);
if(n % 3 == 0 && n % 5 != 0) {
printf("Digi"); }
else if(n % 3 != 0 && n % 5 == 0) {
printf("Lab"); }
else if(n % 3 == 0 && n % 5 == 0) {
printf("DigiLab"); }
else if(n % 3 != 0 && n % 5 != 0) {
printf("input %d", &n); }
return 0;

}
// float phi =3.14 ;
// char _backlight;
// int radius,height;
// double Acylinder;
// printf("Enter the radius: ");
// scanf("%d", &radius );
// printf("\n Enter the height: ");
// scanf("%d", &height );
// Acylinder = 2*phi*radius*radius + 2*phi*radius*height;
// printf("the result is : %f ", Acylinder);
// return 0;
