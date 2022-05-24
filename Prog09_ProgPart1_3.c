//Adrian Leo Pradana x Raafiandy Ghani Ramadhan
//2106718344 x 2106718445
#include <stdio.h>

int inputArray(int voters[], int length);

int main(){
 
 int n, counter, count1 = 0, count2 = 0, count3 = 0, invalid = 0;
 
 printf("Number of voters: ");
 scanf("%d", &n);
 int arrayVoters[n];
 inputArray(arrayVoters, n);
 
 for (counter = 0; counter < n; counter++){
 
  if (arrayVoters[counter] == 1){
   count1++;
  }
  else if (arrayVoters[counter] == 2){
   count2++;
  }
  else if (arrayVoters[counter] == 3){
   count3++;
  }
  else {
   invalid++;
  }
 }
 
 printf("Party     Votes     Histogram\n");
 printf("1         %d        ", count1);
 
 for (counter = 0; counter < count1; counter++){
   printf("#");
 }
 printf ("\n");
 
 printf("2         %d        ", count2);
 
 for (counter = 0; counter < count2; counter++){
  printf("#");
 }
 printf ("\n");
 
 printf("3         %d        ", count3);
 for (counter = 0; counter < count3; counter++){
   printf("#");
 }
 printf ("\n");
 
 printf("Invalid   %d        ", invalid);
 for (counter = 0; counter < invalid; counter++){
   printf("#");
 }
 printf("\n");
 printf("Total     %d", n);

 return 0;
}

int inputArray(int voters[], int length){
 
 int count, value;
 for (count = 0; count < length; count++){
  scanf("%d", &value);
  voters[count] = value;
 }
 return voters;
}

