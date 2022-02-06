#include <stdio.h>
int main()
{
      int number, sum = 0;
      printf("Input the  number : ");
      scanf(" %d", &number);
      for (int i = 1; i < number; i++)
      {
            for (int j = 1; j <= 10; j++)
            {
                  if ((i * j) == number)
                  {
                        sum = sum + i;
                  }
            }
      }
      if (sum == number)
      {
            printf("The number is perfect\n");
      }
      else
      {
            printf("The number is not perfect\n");
      }

      // Second method
      /*
      	int sum = 0;
		for (int i = 1; i < n; i++)
			if (n % i == 0) {
				sum += i;
				if (sum == n) {
					return true;
				}
			}
		return false;
      */


      return 0;
}