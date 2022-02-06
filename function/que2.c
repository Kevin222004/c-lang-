#include<stdio.h>

int square(int num){
      int square = num*num;
      return square;
}

int main(){

int n ;
printf("Input any number for square : ");
scanf("%d",&n);
 printf("The square of %d is : %d",n,square(n));
return 0;
}