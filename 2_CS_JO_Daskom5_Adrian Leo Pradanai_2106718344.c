#include <stdio.h>

int height,n ,i, j, space, k=0, input;

int main() {
   
   printf("Enter the number of height: ");
   scanf("%d", &height);
   height = height/2;
   printf("Please enter the ASCII character you want : \n");
   printf("1. * \n");
   printf("2. # \n");
   printf("3. @ \n");
   printf("4. %% \n");
   scanf("%d", &input);
   switch(input){
	   	case 1 :
					if(input%2==0){
		      n = height/2;
		      
		     for(i = n; i >= 1; i--){
		            for(j = 2*n-1; j >= 1; j--){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("*");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		    
		        for(i = 1; i <= n; i++){
		            for(j = 1; j <= 2*n-1; j++){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("*");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		
		        } else {
		             n = height/2+1;
		            
		            
		             for(i = n; i >= 1; i--){
		                    for(j = 2*n-1; j >= 1; j--){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("*");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		            
		                for(i = 2; i <= n; i++){
		                    for(j = 1; j <= 2*n-1; j++){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("*");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		        }
		break;
		case 2 :
					if(input%2==0){
		      n = height/2;
		      
		     for(i = n; i >= 1; i--){
		            for(j = 2*n-1; j >= 1; j--){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("#");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		    
		        for(i = 1; i <= n; i++){
		            for(j = 1; j <= 2*n-1; j++){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("#");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		
		        } else {
		             n = height/2+1;
		            
		            
		             for(i = n; i >= 1; i--){
		                    for(j = 2*n-1; j >= 1; j--){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("#");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		            
		                for(i = 2; i <= n; i++){
		                    for(j = 1; j <= 2*n-1; j++){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("#");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		        }
		break;
		case 3 :
					if(input%2==0){
		      n = height/2;
		      
		     for(i = n; i >= 1; i--){
		            for(j = 2*n-1; j >= 1; j--){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("@");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		    
		        for(i = 1; i <= n; i++){
		            for(j = 1; j <= 2*n-1; j++){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("@");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		
		        } else {
		             n = height/2+1;
		            
		            
		             for(i = n; i >= 1; i--){
		                    for(j = 2*n-1; j >= 1; j--){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("@");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		            
		                for(i = 2; i <= n; i++){
		                    for(j = 1; j <= 2*n-1; j++){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("@");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		        }
		break;
		case 4 :
					if(input%2==0){
		      n = height/2;
		      
		     for(i = n; i >= 1; i--){
		            for(j = 2*n-1; j >= 1; j--){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("%%");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		    
		        for(i = 1; i <= n; i++){
		            for(j = 1; j <= 2*n-1; j++){
		                if(j >= n-(i-1) && j <= n+(i-1)){
		                    printf("%%");
		                } else printf(" ");
		            }
		            printf("\n");
		        }
		
		        } else {
		             n = height/2+1;
		            
		            
		             for(i = n; i >= 1; i--){
		                    for(j = 2*n-1; j >= 1; j--){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("%%");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		            
		                for(i = 2; i <= n; i++){
		                    for(j = 1; j <= 2*n-1; j++){
		                        if(j >= n-(i-1) && j <= n+(i-1)){
		                            printf("%%");
		                        } else printf(" ");
		                    }
		                    printf("\n");
		                }
		        }
		break;
		default:
			printf("\n INVALID INPUT");
		break;
   	
   }
   
}
