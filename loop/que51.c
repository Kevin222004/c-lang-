#include <stdio.h>

void main()
{
      int n1, n5, p = 1, k, ch = 1;
      int dn = 0, i = 1, j, d;


      printf("Input an octal number (using digit 0 - 7) :");
      scanf("%d", &n1);
      n5 = n1;

      for (; n1 > 0; n1 = n1 / 10)
      {
            k = n1 % 10;
            if (k >= 8)
            {
                  ch = 0;
            }
      }

      switch (ch)
      {
      case 0:
            printf("\nThe number is not an octal number. \n\n");
            break;
      case 1:
            n1 = n5;
            for (j = n1; j > 0; j = j / 10)
            {
                  d = j % 10;
                  if (i == 1)
                        p = p * 1;
                  else
                        p = p * 8;

                  dn = dn + (d * p);
                  i++;
            }
            printf("\nThe Octal Number : %d\nThe equivalent Decimal  Number : %d \n\n", n5, dn);
            break;
      }
}
