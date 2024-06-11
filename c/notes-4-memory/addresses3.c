#include <stdio.h>

int main(void)
{
  int n = 50;
  int *p = &n;
  printf("%p\n", p);
}

// & provides the address of something stored in memory.
// * instructs the compiler to go to a location in memory.
