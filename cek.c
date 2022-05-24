#include <stdio.h>

int inputArray(int voters[], int length);

int main(){
 
 int num, counter, count1 = 0, count2 = 0, count3 = 0, countinvalid = 0;
 
 printf("Number of voters: ");
 scanf("%d", &num);
 int votersnum[num];
 inputArray(votersnum, num);
 
 for (counter = 0; counter < num; counter++){
 
  if (votersnum[counter] == 1){
   count1++;
  }
  else if (votersnum[counter] == 2){
   count2++;
  }
  else if (votersnum[counter] == 3){
   count3++;
  }
  else {
   countinvalid++;
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
 
 	printf("Invalid   %d        ", countinvalid);
 for (counter = 0; counter < countinvalid; counter++){
  	printf("#");
 	}
 printf("\n");
 printf("Total     %d", num);

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
