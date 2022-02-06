#include <stdio.h>

void main()
{

      int i, j, numlow, numhigh, sum = 0;

      printf("Input the starting of number\n");
      scanf("%d", &numlow);
      printf("Input the ending range of number:\n");
      scanf("%d", &numhigh);
      printf("The perfect numbers within %d and %d is: ", numlow, numhigh);
      for (i = numlow; i <= numhigh; i++)
      {
            sum = 0;
            for (j = 1; j <= numhigh; j++)
            {
                  if (i % j == 0 && i != j)
                  {
                        sum = sum + j;
                  }
            }
            if (sum == i)
            {
                  printf("%d ", i);
            }
      }
}