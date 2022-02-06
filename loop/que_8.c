#include <stdio.h>
int main()
{
    int n;
    int i, sum = 0;
    printf("Input number of term : ");
    scanf("%d", &n);
    printf("The odd number are : ");

    for (i = 1; i <= n; i++)
    {
        printf(" %d ", 2 * i - 1);
        sum += 2 * i - 1;
    }
    printf("The sum of odd natrual number upto 10 terms : %d", sum);

    return 0;
}