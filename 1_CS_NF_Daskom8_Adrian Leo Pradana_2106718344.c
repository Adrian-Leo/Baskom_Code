//Adrian Leo Pradana
//2106718344

#include<stdio.h>


void transpose(int matrix[2][2]){
	int i,j;
	int transposeResult[2][2];
	
	for (i = 0; i < 2 ; i++){
		for (j = 0; j < 2; j++){
			transposeResult[j][i] = matrix [i][j];
		}
	}
	
	printf("Transpose of the matrix:\n");
   for (i = 0; i< 2; i++) {
      for (j = 0; j < 2; j++)
         printf("%d\t", transposeResult[i][j]);
      printf("\n");
   }

}

int determinant(int matrix[2][2]){
	int determinantResult;
	determinantResult = matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1];
    printf("\n Determinannya adalah : %d",  determinantResult);
	printf("\n");
}


int main(){
	int matrix[2][2];
	int rows,columns, loop =1;
	

	do{
		printf("\n Masukan elemen matriks \n");
			for(rows = 0; rows < 2; rows++)
  		{
   			for(columns = 0;columns < 2;columns++)
    		{
      		scanf("%d", &matrix[rows][columns]);
    		}
  		}
  		
  		printf("\nElemen matriks  : \n ");
   		for(rows = 0; rows < 2; rows++)
  		{
   		for(columns = 0; columns < 2; columns++)
    		{
      		printf("%d\t", matrix[rows][columns]);
    		}
    	printf("\n");
  		}
  		
  		transpose(matrix);
  		determinant(matrix);
  		
		
		printf("\n Lagi? (0 = Tidak , 1 = Ya ) : ");
		scanf("%d", &loop);
	}while(loop !=0);
}
