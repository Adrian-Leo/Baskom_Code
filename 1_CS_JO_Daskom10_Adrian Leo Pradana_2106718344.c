#include<stdio.h>
struct Player
{
    int total;
 	char name[50];
 	int goal;
 	int assist;
 	int individualAward;
 	int teamAward;
    
}myPlayer[3];
int main()
{
     int i,j;
     struct Player p;
     for(i=0;i<3;i++)
     {
        printf("Enter Score Player-%d \n",i+1);
        printf("-----------------------------------\n");
        printf("\nNama pemain ke-%d : ", i+1 );
        scanf ("%s", &myPlayer[i].name);
        printf("\nJumlah Gol : " );
   		scanf("%d", &myPlayer[i].goal);
   		printf("\nJumlah Asis : ");
   		scanf("%d", &myPlayer[i].assist);
   		printf("\nJumlah penghargaan individu : ");
   		scanf("%d", &myPlayer[i].individualAward);
   		printf("\nJumlah piala untuk tim : " );
   		scanf("%d", &myPlayer[i].teamAward);
            
   		myPlayer[i].total=0;
        myPlayer[i].total=myPlayer[i].goal + myPlayer[i].assist + myPlayer[i].individualAward*5 +myPlayer[i].teamAward*10 ;

        printf("\n-----------------------------------\n");
     }
     for(i=0;i<3;i++)
     {
          for(j=i+1;j<3;j++)
          {
               if(myPlayer[i].total<myPlayer[j].total)
               {
                    p=myPlayer[i];
                    myPlayer[i]=myPlayer[j];
                    myPlayer[j]=p;
               }
          }
     }
  
     printf("\n-----------------------------------\n");
     printf("\n NAME\t  TOTAL-Score  \n");
     for(i=0;i<3;i++)
     {
          printf("\n %s\t %d",myPlayer[i].name,myPlayer[i].total);
     }
     return 0;
}
