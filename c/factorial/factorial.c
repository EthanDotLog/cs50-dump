#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
  int n;
  do
  {
    n = get_int("n: ");
  }
  while (n < 0);

  printf("%i\n", factorial(n));
  
}

int factorial(int n)
{
  //base case
  if (n == 1)
  {
    return 1;
  }
  
  return n * factorial(n - 1);
}