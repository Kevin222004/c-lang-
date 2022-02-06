#include <stdio.h>
int main()
{
    int i;
    int j;
    int multi;
    printf("Input the number (Table to calculated) : ");
    scanf("%d", &i);

    for (j = 1; j <= 10; j++)
    {
        multi = i * j;
        printf("15 x %d = %d\n", j, multi);
    }

    return 0;
}