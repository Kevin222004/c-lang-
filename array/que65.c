#include <stdio.h>
 
void productOfArray(int arr1[], int n)
{
  int l_arr[n],r_arr[n],product[n];
  int i, j;
  l_arr[0] = 1;
  r_arr[n-1] = 1;
  for(i = 1; i < n; i++)
    l_arr[i] = arr1[i-1]*l_arr[i-1];
  for(j = n-2; j >=0; j--)
    r_arr[j] = arr1[j+1]*r_arr[j+1];
  for (i=0; i<n; i++)
    product[i] = l_arr[i] * r_arr[i];
  for (i=0; i<n; i++)
    printf("%d ",product[i]);
}
 
int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int i;
	//------------- print original array ------------------	
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
//------------------------------------------------------   
  
  printf("The product array is: ");
  productOfArray(arr1, n);
}
