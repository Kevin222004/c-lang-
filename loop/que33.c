#include <stdio.h>
int main()
{
      int num;
      int n;
      printf("Input the number of rows : ");
      scanf("%d", &n);

      for (int row = 0; row < n; row++)
      {
            for (int space = 0; space < (n - row); space++)
            {
                  printf(" ");
            }
            num =1;
            for (int col = 0; col <= row; col++)
            {
                  
                      printf("%d " , num);
                      num = num*(row-col)/(col+1);
            }
            printf("\n");
      }

      return 0;
}