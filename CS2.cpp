	#include<stdio.h>
	
	int main(){
	 int currentLvl = 0,currentXp =0,character=0,totalLvl=0,totalXp=0;
	 float average =0;
	 char nationCode;
	 int counter = 0;
	 int Mondstadt=0,Liyue=0,Inazuma=0;
	 const int NPM= 18344;
	 
	 printf("Please input how many characters are : ");
	 scanf("%d", &character);
	 
	 while(counter < character){
	 	printf("Please input %d ",character);
	 	printf("lines \n");
	 	if(character < 1 && character > 256){
	 		printf("Invalid Input Character \n");
		 }
		 else{
		 	
		 	printf("Please input currentLvl_currentXP_nationCode \n");
		 	scanf("%d_%d_%c",&currentLvl,&currentXp,&nationCode);
		 
		 	if(currentLvl < 1 && currentLvl > 90 ){
		 		printf("Invalid LVl \n");
			 }
			 else{
			 	totalLvl += currentLvl;
			 }
			if(currentXp < 1 && currentXp > 10000000 ){
		 		printf("Invalid LVl \n");
			 }
			 else{
			 	totalXp += currentXp;
			 }
		 	if(nationCode == 'M'){
		 		Mondstadt +=1;
			 }
			 else if(nationCode == 'L'){
			 	Liyue +=1;
			 }
			 else if(nationCode == 'I'){
			 	Inazuma +=1;
			 }
			 else{
			 	printf("Invalid Nation Code \n");
			 }
		}
		counter++;
	 }
	 average = totalLvl / character ;
	 printf("Average Level : %2f \n", average);
	 printf("Total XP: %d \n", totalXp);
	 printf("Number of Characters from Monstadt : %d \n", Mondstadt );
	 printf("Number of Characters from Liyue : %d \n", Liyue );
	 printf("Number of Characters from Inazuma : %d \n", Inazuma );
	 if(totalXp > NPM){
	 	printf("Go Touch Some Grass");
	 }
	 	 
	}
