#include <stdio.h>
int main()
{

      int r, sum = 0, temp, start, end, k;

      printf("Input starting number of range: ");
      scanf("%d", &start);
      printf("Input ending number of range : ");
      scanf("%d", &end);
      printf("Armstrong numbers in given range are: ");

      for (int i = start; i <= end; ++i)
      {
            sum = 0;
            for (k = i; k != 0; k /= 10)
            {
                  r = k % 10;
                  sum += (r * r * r);
            }
            if (sum == i)
                  printf("%d ", sum);
      }

      return 0;
}
