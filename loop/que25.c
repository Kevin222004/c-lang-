#include <stdio.h>
int main()
{
      int n;
      printf("Input the number of terms :");
      scanf("%d", &n);
      printf("The square natrual upto 5 terms are  :");
      int square;
      int sum = 0;
      for (int i = 1; i <= n; i++)
      {
            square = i * i;

            printf("%d ", square);
            sum += square;
      }
      printf("The Sum of Square Natural Number upto 5 terms  %d", sum);
      return 0;
}