#include<stdio.h>

void swap(int a,int b){
      int temp ;
      temp = a;
      a = b;
      b=temp;
      printf("After swapping: n1 = %d , n2 = %d\n",a,b);
}


int main(){
int n1,n2;
printf("Input the first number : ");
scanf("%d",&n1);
printf("Input the first number : ");
scanf("%d",&n2);
printf("Before awapping: n1 = %d, n2 = %d\n",n1,n2);
swap(n1,n2);
return 0;
}