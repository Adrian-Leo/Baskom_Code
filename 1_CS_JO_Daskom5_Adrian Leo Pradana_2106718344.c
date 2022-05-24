#include <stdio.h>

int main()
{
    //input
    int height, n, i, j;
    printf("enter number of height : ");
    scanf("%d", &height);
   
  
  if(height%2==0){
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
    return 0;
}
   

