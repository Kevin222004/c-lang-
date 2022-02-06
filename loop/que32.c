#include <stdio.h>

int main()
{

      int num, i, k = 0;
      printf("Input  a number: ");
      scanf("%d", &num);
      for (i = 2; i < num; i++)
      {
            if (num % i == 0)
            {
                  k++;
                  break;
            }
      }
      if(k==0 && num!= 1)
        printf("%d is a prime number.\n",num);
   else
      printf("%d is not a prime number",num);
return 0;
}
