#include <stdio.h>

int height, i, j, space, k=0;

int main() {
   
   printf("Enter the number of height: ");
   scanf("%d", &height);
   height = height/2;
   for (i = height; i >= 1; --i) {
      for (space = 0; space < height - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   
   for (i = 1; i <= height; ++i, k = 0) {
      for (space = 1; space <= height - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
}
