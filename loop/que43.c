#include<stdio.h>
int main(){

int num1;
int num2;
int HCF;
printf("Input the first number of HCF : ");
scanf("%d",&num1);
printf("Input the second number of HCF : ");
scanf("%d",&num2);

  int j = (num1<num2) ? num1 : num2;  
  
    for(int i=1; i<=j; i++)  
    {  

        if(num1%i==0 && num2%i==0)  
        {  
            HCF = i;  
        }  
    }  

printf("HCF of %d and %d is : %d\n",num1,num2,HCF);

return 0;
}