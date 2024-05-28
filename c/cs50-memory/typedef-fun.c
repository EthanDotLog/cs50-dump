#include <stdio.h>

typedef int integer;
typedef char *string;

int main(void)
{
  integer n = 50;
  integer *p = &n;
  string s = "me a string";
  printf("%i\n%s", *p, s);
}