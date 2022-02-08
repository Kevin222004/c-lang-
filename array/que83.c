#include <stdio.h>
# include <stdbool.h>

bool pairFinding(int arr1[], int size, int d)
{
    int i = 0;  
    int j = 1;

    while (i<size && j<size)
    {
        if (i != j && arr1[j]-arr1[i] == d)
        {
            printf("The pair are: (%d, %d)", arr1[i], arr1[j]);
            return true;
        }
        else if (arr1[j]-arr1[i] < d)
            j++;
        else
            i++;
    }
 
    printf("No such pair found in the given array.");
    return false;
}

int main()
{
    int arr1[] = {1, 15, 39, 75, 92};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int d = 53,i;
 //------------- print original array ------------------	
	printf("The given array is:  \n");
	for(i = 0; i < size; i++)
		{
			printf("%d  ", arr1[i]);
		}
	printf("\n");
//------------------------------------------------------ 
	printf("The given difference is:  %d\n",d);
    pairFinding(arr1, size, d);
    return 0;
}
