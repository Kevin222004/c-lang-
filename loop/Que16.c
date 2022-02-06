#include<stdio.h>
int main(){
            int num,i,sum = 0;
            printf("Input number of terms : " );
            scanf("%d",&num);

      printf("The even Number are : ");
      for( i = 1; i<=2*num;i++){
            if(i%2 == 0){
                printf("%d ",i);
            }
            sum +=i;
      }
      printf("\n");
            printf("The Sum of even Natural Number upto %d terms : %d ",num,sum);



return 0;
}
