#include <stdio.h>
#include <math.h>
int factorial(int n)
{
      int fact;
      if (n < 2)
      {
            return 1;
      }
      else
      {
            fact = n * factorial(n - 1);
      }
      return fact;
}
int main()
{

      int x, terms;
      float sum = 0;
      printf("Input the value of x : ");
      scanf("%d", &x);
      printf("Input the number of terms : ");
      scanf("%d", &terms);
      
      for (int i = 1; i <= terms; i++)
      {
            int n = terms - 1;
            float t = pow(x, n) / factorial(n);
            sum =sum +  t;
      }

      printf("%f",sum);

      return 0;
}