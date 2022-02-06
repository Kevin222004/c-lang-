#include <stdio.h>
int Element(int A[],int length){
      int s = A[0];
      for(int j = 1;j<length;j++){
            if(s<A[j]){
                  s = A[j];
            }
          return s;
      }

}

int main()
{
    int n;
    int i;
    printf("ENter the number of elements to be stored in array : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("elements at %d :", i);
        scanf("%d", &arr[n]);
            }

int print = Element(&arr[n],n);
      printf("The largest element in the array is : %d \n",print);

return 0;
}