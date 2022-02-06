#include <stdio.h>
int main()
{
      int k = 1, col = 1;
      for (int row = 1; row <= 4; row++)
      {

            int space = 4 - row;
            for (int i = space; i >= 1; i--)
            {

                  printf(" ");
            }

            for (col = 1; col <= row; col++)
            {
                  printf("%d ", k++);
            }
            printf(" \n");
      }

      return 0;
}