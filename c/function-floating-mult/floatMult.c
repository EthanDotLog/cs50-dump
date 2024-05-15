#include <stdio.h>
#include <cs50.h>

float mult(float a, float b);
int main(void)
{
  float a = get_float("First Floating Number? ");
  float b = get_float("Second Floating Number? ");
  float c = mult(a, b);
  printf("%f\n", c);
}

float mult(float a, float b)
{
  return a * b;
}