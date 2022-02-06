#include <stdio.h>
int main()
{
      int num1;
      int num2;
      int LCM;

      printf("Input 1st number for LCM: ");
      scanf("%d", &num1);
      printf("Input 2ndt number for LCM: ");
      scanf("%d", &num2);

      LCM = (num1 > num2) ? num1 : num2;

      for (int i = LCM;; i += LCM)
      {

            if (i % num1 == 0 && i % num2 == 0)
            {
                  LCM = i;
                  break;
            }
      }

      printf("The LCM of %d and %d is : %d\n", num1, num2, LCM);
      return 0;
}