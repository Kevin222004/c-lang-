
#include <stdio.h>
#include <math.h>
void main()
{
	int x,sum,ctr;
	int i,n,min,powe,nn;
	printf("Input the value of x :");
	scanf("%d",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =x; min=-1;
	printf("The values of the series: \n");
	printf("%d\n",x);
    for (i = 1; i < n; i++) 
    {
        ctr = (2 * i + 1);
        powe = pow(x, ctr);
        nn = powe * min;
        printf("%d \n",nn);
        sum = sum + nn;
        min = min * (-1);
	}
	printf("\nThe sum = %d\n",sum);
}