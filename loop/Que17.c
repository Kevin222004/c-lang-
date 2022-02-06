#include<stdio.h>
int main(){

      for (int row = 1; row <= 4; row++)
      {
            int space = 4 - row;
            for ( int i =space; space >= 1; space--)
            {
                  printf(" ");
            }

            for (int col = 1; col <= row; col++)
            {
                  printf("%d ",row);
            }
            printf("\n");
      }
            
return 0;
}
