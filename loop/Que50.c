#include <stdio.h>

void main()
{
      int n, i, j, oct = 0, n1;

      printf("Enter a number to convert : ");
      scanf("%d", &n);

      n1 = n;
      i = 1;

      for (j = n; j > 0; j = j / 8)
      {
            oct = oct + (j % 8) * i;
            i = i * 10;
            n = n / 8;
      }

      printf("\nThe Octal of %d is %d.\n\n", n1, oct);
}
