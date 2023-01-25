#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      for(k=1;k<=i;k++){
        if(k==i)printf("*");
        else printf("* ");
      }
      if(i!=rows)printf("\n");
      
   }
   return 0;
}
