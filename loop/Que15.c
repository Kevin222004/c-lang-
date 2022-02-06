#include <stdio.h>

int factorial(int n)
{
      int facto;
      if (n == 0 || n == 1)
      {
            return 1;
      }
      else
      {
            facto = n * factorial(n - 1);
      }
      return facto;
}

int main()
{

      int num;

      printf("Input the number");
      scanf("%d", &num);
      int fact = factorial(num);
      printf("The Factorial of 5 is %d\n", fact);

      return 0;
}