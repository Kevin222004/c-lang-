#include<stdio.h>
int main()
{
int n;
int m;
int multi;

printf("Enter the starting number \n");
scanf("%d",&n);

printf("Enter the end number \n");
scanf("%d",&m);

for(int i=1;i<=10;i++)
{
    for(int j=n;j<=m;j++)
    {
        multi=j*i;
        printf("%d x %d = %d    ",j,i,multi);
    }
 printf("\n ");
}

return 0;
}