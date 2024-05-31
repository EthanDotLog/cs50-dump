#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char n = 'd';
  char *p = &n;
  printf("%p", p);
}

// the * signifies that the p is a pointer
// the & grabs the location in memory for the variable named p