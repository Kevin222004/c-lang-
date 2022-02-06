#include <stdio.h>
int main()
{
    int i, j, num = 4, k = 1;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%d ", k++);
        }
        printf("\n");
    }

    return 0;
}