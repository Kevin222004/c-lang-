#include <stdio.h>

void main()
{
      int arr[10];
      int i;

      printf("Input 10 elements in the array :\n");
      for (i = 0; i < 10; i++)
      {
            printf("element - %d : ", i);
            scanf("%d", &arr[i]);
      }

      printf("Elements in array are: ");
      for (i = 0; i < 10; i++)
      {
            printf("%d  ", arr[i]);
      }
      printf("\n");
}