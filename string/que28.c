#include<stdio.h>
#include<ctype.h>

int main()
{
	char TestChar;

    printf(" Input a character : "); 
    scanf( "%c", &TestChar );
	if( islower(TestChar) )
		printf( " The entered letter is a lowercase letter. " );
	else
		printf( " The entered letter is not a lowercase letter. " );
	return 0;
}
