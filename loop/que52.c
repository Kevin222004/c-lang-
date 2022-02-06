#include <stdio.h>
#include <math.h>

void main()
{

      float firstNum, r, i, n, j;
      float terms, gpn;
      float sum = 0;

      printf("Input the first number of the G.P. series: ");
      scanf("%f", &firstNum);

      printf("Input the number or terms in the G.P. series: ");
      scanf("%f", &terms);

      printf("Input the common ratio of G.P. series: ");
      scanf("%f", &r);

      printf("\nThe numbers for the G.P. series:\n ");
      printf("%f ", firstNum);
      sum = firstNum;

      for (j = 1; j < terms; j++)
      {
            gpn = firstNum * pow(r, j);
            sum = sum + gpn;
            printf("%f  ", gpn);
      }
      printf("\nThe Sum of the G.P. series : %f\n\n", sum);
}
