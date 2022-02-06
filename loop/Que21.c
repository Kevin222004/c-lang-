#include <stdio.h>
int main()
{
      int terms, sum = 0;
      int t = 9;
      printf("Input the number of terms : ");
      scanf("%d", &terms);

      for (int i = 1; i <= terms; i++)
      {
            sum += t;

            printf("%d + ", t);
            t = t * 10 + 9;
      }
      printf("\n");
      printf("The sum of the series is  : %d", sum);
      return 0;
}