#include <stdio.h>
int main()
{
    int i = 9;
    int j;
    int sum = 0;
    float avg;
    int num[i];
    for (j = 0; j <= i; j++)
    {
        printf("number-%d :", j + 1);
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = (sum) / 10.0;
    printf("The sum of %d no is : %d \n", i + 1, sum);
    printf("The Average is : %f\n", avg);
    return 0;
}