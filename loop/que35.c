#include <stdio.h>

int fibonacci(int data)
{
      int fibbo;
      if (data == 0 || data == 1)
      {
            fibbo = data;
      }
      else
      {
            fibbo = fibonacci(data - 2) + fibonacci(data - 1);
      }
      return fibbo;
}

int main()
{
      int num;
      printf("Input the numer of terms : ");
      scanf("%d", &num);

      printf("Here is the fibonnaci series upto %d terms : ", num);
      for (int i = 0; i <= num; i++)
      {
            printf("%d ", fibonacci(i));
      }

      return 0;
}