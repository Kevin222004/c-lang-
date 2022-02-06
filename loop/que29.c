#include <stdio.h>
int main()
{
      printf("Input the number ");
      int n;
      scanf("%d", &n);
      int r, sum = 0, temp;
      int i;
      for (i = n; n != 0; n = n / 10)
      {
            r = n % 10;
            sum = sum + (r * r * r);
      }
      if (sum == i)
      {
            printf("%d is Armstring  number ",i);
      }
      else
      {
            printf("The number is not a Armstrong number ");
      }

      return 0;
}