#include<stdio.h>
int factorial(int n){
      int fact;
      if(n<2){
            return 1;
      }
      else{
            fact = n * factorial(n-1);
      }
      return fact;
}

int sumOfSeries(){
      int sum = 0;
      for(int i=1;i<=5;i++){
            sum = sum + (factorial(i)/i);
      }
      return sum;
}

int main(){

      printf("The sum of the series is : %d\n",sumOfSeries());

return 0;
}