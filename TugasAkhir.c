//Adrian Leo Pradana x Raafiandy Ghani 
//2106718344 x 2106718445
#include<stdio.h>

struct gojek_t {
	//struct member
	char alamat_asal[50], alamat_tujuan[50], nama_menu[50], alamat[50];
	float harga,jarak, total ;
	int jumlah;
	
//struct variable	
} goride_1, gofood_1;

//main menu
void menu(){
	printf("\n\n");
	printf(" \t**********************************************\n"  );
    printf(" \t|            W E L C O M E   T O             |\n" );
    printf( "\t|                G O J E K                   |\n" );
    printf( "\t**********************************************\n" );
    printf( "\t|                                            |\n" );
    printf( "\t| 1. GORIDE                                  |\n" );
    printf( "\t| 2. GOFOOD                                  |\n" );
    printf( "\t| 3. LIHAT RIWAYAT TRANSAKSI                 |\n" );
    printf( "\t| 4. Program Done                            |\n" );
    printf( "\t|                                            |\n" );
    printf( "\t**********************************************\n" );
       
}

//go ride header
void goRideMenu(){
	system("cls");
	printf( "\t|********************************************|\n" );
    printf( "\t|            W E L C O M E   T O             |\n" );
    printf( "\t|               G O  R I D E S               |\n" );
    printf( "\t**********************************************\n" );
    printf( "\n\n");
}

// go food header
void goFoodMenu(){
	system("cls");
	printf( "\t|********************************************|\n" );
    printf( "\t|            W E L C O M E   T O             |\n" );
    printf( "\t|               G O  F O O D                 |\n" );
    printf( "\t**********************************************\n" );
    printf( "\n\n");
}

//print go ride receipt
void printGoRide(){

		printf( "\t**********************************************\n" );
        printf( "\t|                G O  R I D E                |\n" );
        printf( "\t|                R E C E I P T               |\n" );
        printf( "\t**********************************************\n" );
		printf( "\n   	Alamat Asal\t	:   %s " , goride_1.alamat_asal );
		printf( "\n   	Alamat Tujuan\t	:   %s" , goride_1.alamat_tujuan  );
		printf( "\n    	Rentang Jarak\t	:   %0.2f Km " ,goride_1.jarak  );
		printf( "\n    	Total Harga\t	: 	%0.2f Rupiah" ,goride_1.total );	
		
	
}

//print go food receipt
void printGoFood()
{
		printf( "\t**********************************************\n" );
	    printf( "\t|                G O  F O O D	            |\n" );
	    printf( "\t|                R E C E I P T               |\n" );
	    printf( "\t**********************************************\n" );
		printf( "\n Alamat Rumah\t 		: 	%s	" , gofood_1.alamat );
		printf( "\n Nama Menu\t 		:	%s	" , gofood_1.nama_menu );
		printf( "\n Jumlah Pesanan\t	: 	%d	" , gofood_1.jumlah );
		printf( "\n Total Harga\t 		: Rp%0.2f Rupiah" ,gofood_1.total ) ;
	
}

//print go ride receipt
void go_rides(){
	int total,choose;
	printf("\n Input your address : ");
	scanf("%s",&goride_1.alamat_asal);
	printf("\n Input your destination : "); 
	scanf("%s", &goride_1.alamat_tujuan);
	printf("\n Input Estimate distance : ");
	scanf("%f", &goride_1.jarak);
	
	goride_1.total = 2000 * goride_1.jarak;

	printf("\n\n");
	printGoRide(goride_1);
	
	
}

//print gofood receipt 
void go_foods(){
	int choose;

	printf( "\t**********************************************\n" );
    printf( "\t|                G O  F O O D                 |\n" );
    printf( "\t|                  M E N U                    |\n" );
    printf( "\t**********************************************\n" );
	printf( "\t 1. Bebek Sinjay \n" );
	printf( "\t 2. Nasi Kaget \n" );
	printf( "\t 3. Sate Setan \n" );
	scanf("%d", &choose);
	switch(choose){
		case 1 :
			printf("\nType Bebek_Sinjay \n");
			scanf("%s", &gofood_1.nama_menu );
			printf("\nJumlah Menu : ");
			scanf("%d", &gofood_1.jumlah);
			gofood_1.total = gofood_1.jumlah * 20000;
			printf("\n Alamat Rumah : ");
			scanf("%s", &gofood_1.alamat);
			printGoFood(gofood_1);
			break;
		case 2 : 
			printf("\nType Nasi_Kaget : \n");
			scanf("%s", &gofood_1.nama_menu );
			printf("\nJumlah Menu : ");
			scanf("%d", &gofood_1.jumlah);
			gofood_1.total = gofood_1.jumlah * 13000;
			printf("\n Alamat Rumah : ");
			scanf("%s", &gofood_1.alamat);
			printGoFood(gofood_1);
			break;
		case 3 :
			printf("\nType Sate_Setan : \n");
			scanf("%s", &gofood_1.nama_menu );
			printf("\nJumlah Menu : ");
			scanf("%d", &gofood_1.jumlah);
			gofood_1.total = gofood_1.jumlah * 10000;
			printf("\n Alamat Rumah : ");
			scanf("%s", &gofood_1.alamat);
			printGoFood(gofood_1);
			break;
		default :
			printf("\nInvalid Input ");
	}
	
}

//print transaction history
void transactionHistory(){
	system("cls");
		int history;
		printf( "\n||||||||||||||||||||||LIHAT RIWAYAT TRANSAKSI|||||||||||||||||||||||\n");
		printf( "\n1. Go Ride " );
		printf( "\n2. Go Food");
		printf( "\n Choose Option : " );

		scanf("%d",&history);
		switch(history){
		
			case 1 :
				printGoRide(goride_1);
				break;	
			case 2 :
				printGoFood(gofood_1);
				break;

			default :
				printf("\n INVALID INPUT \n");
				break;
		}
}


int main(){
	int choose; 

	while(choose != 4){
		menu();
		
		printf("Choose your option : ");
		scanf("%d",&choose);
		switch(choose){
			case 1 :
				goRideMenu();
				go_rides();
				break;

			case 2:
				goFoodMenu();
				go_foods();
				break;	
			case 3 : 
				transactionHistory();
				break;
			default :
				printf("\n =========Thank You For Using Our Apps========= ");
		} 
			
	}
}
