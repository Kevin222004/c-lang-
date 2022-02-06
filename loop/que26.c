#include<stdio.h>
int main(){
    int n;
    printf("Input the number of terms : ");
	scanf("%d",&n);
	
	int t = 1,sum=0;
	
	for(int i =1 ;i<= n ;i++) {
	 printf("%d ",t);
		t=(t*10)+1;
     
		sum = sum + t;
	}
	printf("\n");
	printf("The sum is : %d \n",sum );
	
return 0;
}