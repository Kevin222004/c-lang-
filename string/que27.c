#include<stdio.h>
#include<ctype.h>

int main()
{
	int ctr=0;
	char str[]=" The quick brown fox \n jumps over the \n lazy dog. \n";	

	while (isprint(str[ctr]))
	{
		putchar (str[ctr]);
		ctr++;
	}
	printf("\n\n");
	return 0;
}
