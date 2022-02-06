#include <stdio.h>
int primeNumber(int n)
{

      for (int i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  return 0;
            }
            return 1;
      }
}

int main()
{
      int n;
      printf("input the number : ");
      scanf("%d", &n);
      int n1 = primeNumber(n);
      if (n1 == 0)
      {
            printf("The number is not a  prime  number \n");
      }
      else
      {
            printf("The number is prime \n");
      }
      return 0;
}