#include <stdio.h>
#include <stdlib.h>

struct Player
{
//  char name[50];
//  float score;
	char name[50];
	int goal;
	int assist;
	int individualAward;
	int teamAward;
	int total = goal + assist + individualAward + teamAward;

} myPlayer[3], dest[100];

int main ()
{
  int i, j, n, highest = 0;
  n = sizeof (myPlayer) / sizeof (*myPlayer);
  for (i = 0; i < n; i++)
    {
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
    }

  for (i = 0; i < n; i++)
    {
      	dest[i] = myPlayer[i]; //Copy of array
    }

  //sort highest score 
  for (i = 0; i < n; i++)
    {
      	if (dest[highest].goal < dest[i].goal)
    	highest = i;
    }
	
printf("\n=========Skor Tertinggi=========")
  for (i = 0; i < n; i++)
    {
      if (dest[i].goal = dest[highest].goal) //Highest point
    	printf ("%s %d\n", dest[highest].name, dest[highest].goal);
    }

  return 0;
}
