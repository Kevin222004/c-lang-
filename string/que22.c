#include<stdio.h>
#include<ctype.h>

int main()
{
	int ctr=0;
	char str_char;
	char str[100]; 
    
   
    printf(" Input a string in UPPERCASE : ");
    fgets(str, sizeof str, stdin);  
    printf(" Here is the above string in lowercase :\n ");    
	while (str[ctr])
	{
		str_char=str[ctr];
		putchar (tolower(str_char));
		ctr++;
	}
	return 0;
}
