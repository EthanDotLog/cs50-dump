#include <stdio.h>

int main(void)
{
  int n = 50;
  printf("%p\n", &n);
}

// & provides the address of something stored in memory.
// * instructs the compiler to go to a location in memory.
