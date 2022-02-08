#include<stdio.h>
#include<ctype.h>


int main()
{
	char TestChar;
   printf(" Input a character : "); 
    scanf( "%c", &TestChar );
	if( isxdigit(TestChar) )
		printf( " The entered character is a hexadecimal digit." );
	else
		printf( " The entered character is not a hexadecimal digit. " );
	return 0;
}
