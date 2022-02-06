#include <stdio.h>
int main()
{
    int num;
    int j;
    int cube;
    printf("Input number of terms : ");
    scanf("%d", &num);

    for (j = 1; j <= num; j++)
    {

        cube = j * j * j;

        printf("Number is : %d and cube of the %d is :%d\n", j, j, cube);
    }

    return 0;
}