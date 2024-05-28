#include <stdio.h>

int main(void)
{
  char *s = "Hi!";
  printf("%c\n%c\n%c\n", s[0], s[1], s[2]);
  printf("%c\n", *s);
  printf("%c\n%c\n%c\n", *s, *(s + 1), *(s + 2));
}