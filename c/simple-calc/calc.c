#include <stdio.h>
#include <cs50.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(void)
{
  int x = get_int("x: ");
  char operator = get_char("operator(+, -, *, /): ");
  int y = get_int("y: ");
  int z;

  if (operator == '+')
  {
    z = add(x, y);
  }
  else if (operator == '-')
  {
    z = sub(x, y);
  }
  else if (operator == '*')
  {
    z = mul(x, y);
  }
  else if (operator == '/')
  {
    z = div(x, y);
  }
  else
  {
    printf("Invalid operator\n");
  }

  printf("%i %c %i = %i\n", x, operator, y, z);
}

int add(int x, int y)
{
  return x + y;
}

int sub(int x, int y)
{
  return x - y;
}

int mul(int x, int y)
{
  return x * y;
}

int div(int x, int y)
{
  int z = x / y;
  return x / y;
}
