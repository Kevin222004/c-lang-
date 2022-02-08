# include <stdio.h>
# include <stdbool.h>
 
bool ChkMajority(int arr1[], int arr_size, int x)
{
    int i;
    int last_index = arr_size%2? (arr_size/2+1): (arr_size/2);		// check last index even or odd
    for (i = 0; i < last_index; i++)
    {
        if (arr1[i] == x && arr1[i+arr_size/2] == x)
            return 1;
    }
    return 0;
}
int main()
{
     int arr1[] ={1, 3, 3, 5, 4, 3, 2, 3, 3};
     int arr_size = sizeof(arr1)/sizeof(arr1[0]);
     int x = 3,i;
	
	printf("The given array is :  ");
	for(i = 0; i < arr_size; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
	printf("The given value is :  %d\n",x);	
	 
     if (ChkMajority(arr1, arr_size, x))
        printf("%d appears more than %d times in the given array[]",x, arr_size/2);
     else
        printf("%d does not appear more than %d times in the given array[]", x, arr_size/2);
 
   return 0;
}