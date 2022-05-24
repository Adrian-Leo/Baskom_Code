#include<stdio.h>

int main(){
	int no = 12;
	int offset_id=0, itemId=0,item=0,counter=0,stop=0;
	
	
	while(stop == 0){
		printf("Please input item IDs : "); 
		scanf("%d", &offset_id);
		item_id= (no + offset_id - 1) % 18; 
		if(item_id == 0){
			printf("Water \n");
		}
		else if(item_id == 1){
			printf("Sand \n");
		}
		else if(item_id== 2){
			printf("Gravel \n");
		}
		else if(item_id == 3){
			printf("Gold Ore \n");
		}
		else if(item_id == 4){
			printf("Iron Ore \n");
		}
		else if(item_id == 5){
			printf("Coal Ore \n");
		}
		else if(item_id == 6){
			printf("Oak Wood \n");
		}
		else if(item_id == 7){
			printf("Air \n");
		}
		else if(item_id== 8){
			printf("Stone \n");
		}
		else if(item_id == 9){
			printf("Grass \n");
		}
		else if(item_id == 10){
			printf("Dirt \n");
		}
		else if(item_id == 11){
			printf("CobbleStone \n");
		}
		else if(item_id == 12){
			printf("Oak Wood Plank \n");
		}
		else if(item_id == 13){
			printf("Oak Sapling \n");
		}
		else if(item_id == 14){
			printf("Bedrock \n");
		}
		else if(item_id== 15){
			printf("Flowing Water \n");
		}
		else if(item_id== 16){
			printf("Still Water \n");
		}
		else if(item_id == 17){
			printf("Flowing Lava \n");
		}
		else if (item_id <= 0){
			stop++
		}
		else{
			printf("Invalid Input, please enter a number between 0-17 \n");
		}
		
	item += 1;	
	
	}
	printf("Number of Items : ", item);
	
}
