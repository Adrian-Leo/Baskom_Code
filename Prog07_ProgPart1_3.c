//Adrian Leo Pradana
//2106718344

#include<stdio.h>
#include<math.h>

float triangleArea(float length){
	float result = sqrt(3) / 4 * length * length;
	return result;
}

float rectangleArea(float length){
	return length * length;
}

int main(){
	int choose;
	float length,volume,surface_area,triangle_area,rectangle_area;
	while(choose != 2){
		if(choose ==2){
			printf("\n ====END====");
		}
		else{
			printf("\n\n CALCULATOR \n");
			printf("1. Calculate Triangle Prism \n");
			printf("2. Done \n");
			printf("Choose : ");
			scanf("%d", &choose);
			switch(choose){
				case 1 :
				
				printf("Input Length : ");
				scanf("%f", &length);
				
				triangle_area = triangleArea(length);
				rectangle_area = rectangleArea(length);
			 
			 	volume = triangle_area * length;
			 	surface_area = (2*triangle_area) + (3*rectangle_area);
			 	
			 	printf("\n The Volume is : %2f ", volume);
			 	printf("\n The Surface Area is : %2f ", surface_area);
			 	
				break;
				
				default:
					printf("\n ===END===");
					break;
			}
		}
	
	}
		
	
	
}
