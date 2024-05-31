#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n = 5;
  int *p = &n;
  printf("%i", *p);
}

// the * signifies that the p is a pointer
// the & grabs the location in memory for the variable named p