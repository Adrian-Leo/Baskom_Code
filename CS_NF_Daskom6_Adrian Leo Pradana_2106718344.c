#include<stdio.h>
#include<windows.h>

void damageCalculate(int base_atk,int weapon_atk, float add_atk, float crit_dmg, float crit_rate){
	int attack, damageCritical, totalDamage;
	
	attack = base_atk+ weapon_atk+ (base_atk * (0.01 * add_atk));
	damageCritical = attack * (attack * (0.01 * crit_dmg));
	totalDamage = 0.1 * crit_rate ; 
	
	printf("\n Statistik Karakter : ");
	printf("\n Attack : %d ", attack);
	printf("\n Damage Critical : %d ", damageCritical);
	printf("\n Jumlah Damage akan Critical : %d ", totalDamage);
	printf(" Dari 10 serangan");
	
	
	
	 
}

void menu(){
	printf("\n Masukkan angka untuk memilih menu :");
	printf("\n 1. Perhitungan Damage ");
	printf("\n 2. Panduan ");
	printf("\n 3. Keluar ");
	
}

int main(){
	int choose,choose2,baseAttack, weaponBaseAttack;
	float attackPercentage, damageCriticalPercentage, criticalRatePercentage;
	
	while(choose != 3 ){
		if(choose == 3){
			printf("\n ===== GAME OVER =====");
		}
		else{
			menu();
			printf("\n Pilih 1/2/3 :");
			scanf("%d", &choose);
			
			switch(choose){
				case 1 :
					printf("Masukkan nilai base attack: ");
	            	scanf("%d", &baseAttack);
	            	printf("\nMasukkan nilai additional attack percentage: ");
	            	scanf("%f", &attackPercentage);
	            	printf("\nMasukkan nilai weapon base attack: ");
	            	scanf("%d", &weaponBaseAttack);
	            	printf("\nMasukkan nilai crit damage: ");
	            	scanf("%f", &damageCriticalPercentage);
	            	printf("\nMasukkan nilai crit rate: ");
	            	scanf("%f", &criticalRatePercentage);
				
					damageCalculate(baseAttack, weaponBaseAttack, attackPercentage, damageCriticalPercentage, criticalRatePercentage);\
					
					printf("\n Apakah ingin melakukan pencarian kembali? (0 untuk lanjut , -1 untuk kembali ke menu awal \n )");
					scanf("%d", &choose2);
					if(choose2 == 0 ){
					printf("\n input baseAttack_weaponBaseAttack_attackPercentage_criticalDamage_criticalRate");
					scanf("%d_%d_%f_%f_%f",&baseAttack,&weaponBaseAttack,&attackPercentage, &damageCriticalPercentage, &criticalRatePercentage);
					damageCalculate(baseAttack, weaponBaseAttack, attackPercentage, damageCriticalPercentage, criticalRatePercentage);
					
					}
					else if(choose2 == -1){
						menu();
						printf("\n Program akan kembali dalam 5 detik...");
						sleep(5);
					}
					else{
						printf("===== INVALID INPUT ====");
					}
					break;
					
			
				case 2 :
					main();
					break;
				default :
					printf("\n ===== GAME OVER =====");
					break;
			}
		}
		
	}
}

