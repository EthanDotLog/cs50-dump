#include <stdio.h>
#include <cs50.h>

int addTwo(int a, int b);
int main(void)
{
  int a = get_int("First number: ");
  int b = get_int("Second number: ");
  int sum = addTwo(a, b);
  printf("%i\n", sum);
}

int addTwo(int a, int b)
{
  return a + b;
}