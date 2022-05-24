//Adrian Leo Pradana 
//2106718344

#include<stdio.h>

void avg(int a, int b, int c, double *result){
	*result = (a+b+c)/3.0;
}

int main(){
	int input=0;

	int subject1,subject2,subject3,inputMahasiswa, i,j;
	char name[50];
	double result;
	
	printf("\t --------- SELAMAT DATANG ---------");
	
	printf("\n Program ini digunakana untuk mengolah data ujian mahasiswa");
		
	while(input != 3 ){
		printf("\n Menu  ");
		printf("\n	1. Mulai Program  ");
		printf("\n	2. Petunjuk Penggunaan Program  ");
		printf("\n	3. Keluar ");
		
		printf("\n\n Silahkan Pilih operasi yang Anda inginkan! ");
		printf("\n >");
		scanf("%d", &input);
		
		switch(input){
			
			case 1 :
				printf("Masukkan jumlah mahasiswa : ");
				scanf("%d", &inputMahasiswa);
				printf("----------------------------- ");
				
				for(i=0 ; i< 2; i++){
					printf("\n Masukkan nama mahasiswa ke-%d :", i+1 );
					scanf("%s", name);
					
					printf("\n Nilai ke 1 : ");
					scanf("%d", &subject1);
					
					printf("\n Nilai ke-2 : ");
					scanf("%d",&subject2);
					
					printf("\n Nilai ke-3 : ");
					scanf("%d",&subject3);
					
				avg(subject1,subject2,subject3,&result);
				
				printf("Rata rata : %.1f ", result);
					
					
				}
					
				break;
				
			case 2 :
				printf("/n Langkah pertama input jumlah mahasiswa");
				printf("/n Langkah kedua input nama mahasiswa");
				printf("/n Langkah ketiga input 3 nilai mahasiswa");
				
				break;
				
				default:
					printf("\n Invalid Input \n");
					break;
			}
			printf("SELESAI");
	}
		

}

