#include <stdio.h>
#define str_size 100 
int test(char *s1, char *s2)
{
      int flag = 0;
      while (*s1 != '\0' || *s2 != '\0')
      {
            if (*s1 == *s2)
            {
                  s1++;
                  s2++;
            }
            else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2)
            {
                  flag = 1;
                  break;
            }
      }
      return flag;
}
int main(void)
{
      char str1[str_size], str2[str_size];
      int flg = 0;
      printf("Input the 1st string : ");
      fgets(str1, sizeof str1, stdin);
      printf("Input the 2nd string : ");
      fgets(str2, sizeof str2, stdin);
      printf("String1: %s", str1);
      printf("String2: %s", str2);
      flg = test(str1, str2);
      if (flg == 0)
      {
            printf("Strings are equal.\n");
      }
      else if (flg == 1)
      {
            printf("Strings are not equal.\n");
      }
      return 0;
}
