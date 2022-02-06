
#include <stdio.h>

void main(){
    int num,i,k,start,end;

    printf("Input starting number of range: ");
    scanf("%d",&start);

    printf("Input ending number of range : ");
    scanf("%d",&end);
    printf("The prime numbers between %d and %d are : \n",start,end);
  
    for(num = start;num<=end;num++)
       {
         k = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 k++;
                 break;
             }
        }
        
         if(k==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n");  
}

