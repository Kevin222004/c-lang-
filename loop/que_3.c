#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum = 0;
    printf("Enter the last number\n");
    scanf("%d", &a);
    printf("The first natrual number is :\n");
    for (b = 1; b <= a; b++)
    {
        printf("%d ", b);
        sum += b;
    }
    printf("\n");
    printf("The sum of Natrual Number upto %d terms : %d \n", a, sum);

    return 0;
}