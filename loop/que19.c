#include<stdio.h>
int main(){
      int n;float sum=0;
            printf("Input the number of terms");
      scanf("%d",&n);

for(int i = 1;i<=n;i++){
      printf("1/%d + ",i);
      sum += (float)1/i;
}
printf("\n");
printf("sum of series upto %d terms is %f",n,sum);

return 0;
}
