//Adrian Leo Pradana x Raafiandy Ghani Ramadhan
//2106718344 x 2106718445
#include <stdio.h>

int main(){
	int scoreList[5][4];
	int rows ,columns, averageScore;
	printf("\n Input The score: \n ");
	 printf("Grade1     Grade2     Grade3 \n");
	for(rows=0;rows<5;rows++){
		printf("\n The %d ", rows+1);
		printf("Student \n");
		for(columns=0;columns<3;columns++){
			scanf("%d", &scoreList[rows][columns]);
			averageScore = (scoreList[rows][0] +scoreList[rows][1] + scoreList[rows][2])/3;
			scoreList[rows][3] = averageScore;
		}
	}
	printf("Grade1\t Grade2\t Grade3\t CGPA\n");
   		for(rows = 0; rows < 5; rows++)
  		{
   		for(columns = 0; columns < 4; columns++)
    		{
      		printf("%d\t", scoreList[rows][columns]);
    		}
    	printf("\n");
  		}
}
