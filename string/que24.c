#include <stdio.h>
#include <ctype.h>

int main()
{
      char TestChar;
      printf(" Input a character : ");
      scanf("%c", &TestChar);
      if (isupper(TestChar))
            printf(" The entered letter is an UPPERCASE letter. ");
      else
            printf(" The entered letter is not an UPPERCASE letter. ");
      return 0;
}
