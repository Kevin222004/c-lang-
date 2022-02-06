#include <stdio.h>
int main()
{
    int i;
    printf("The first 10 natrual number is :\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The Sum is :%d", sum);

    return 0;
}
