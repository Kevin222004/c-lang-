#include <stdio.h>
int main()
{
      int row, col;

      for (int row = 1; row <= 5; row++)
      {
            for (int col = 1; col <= row; col++)
            {
                  if ((row + col) % 2 == 0)
                  {
                        printf("0");
                  }
                  else
                  {
                        printf("1");
                  }
            }
            printf("\n");
      }

      return 0;
}
