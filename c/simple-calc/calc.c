#include <stdio.h>
#include <cs50.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
float div(int x, int y);
string doMaths();

int main(void)
{
  printf("EthanDotLog's Calculator\n");
  printf("I can do addition, subtraction, multiplication, and division. Just enter the numbers and an operation (when prompted) and I'll do it for you. \n");
  printf("Get ready, and remember don't be a cunt...\n");
  char doMath = 'y';
  while (doMath == 'y' || doMath == 'Y')
  {
    doMaths();
    doMath = get_char("Do you want to do another calculation? (y/n): ");
  }
  printf("Bye! I hope you don't get stabbed for bad math by not using my calculator. sincerely, EthanDotLog\n");
}

string doMaths()
{
  int x = get_int("what is x: ");
  char op = get_char("What kind of maths? ((!ONLY!) +, -, *, /): ");
  int y = get_int("what is y: ");
  if (op == '+')
  {
    printf("%i + %i = %i\n", x, y, add(x, y));
  }
  else if (op == '-')
  {
    printf("%i - %i = %i\n", x, y, sub(x, y));
  }
  else if (op == '*')
  {
    printf("%i * %i = %i\n", x, y, mul(x, y));
  }
  else if (op == '/')
  {
    printf("%i / %i = %f\n", x, y, div(x, y));
  }
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

float div(int x, int y)
{
  float z = (float) x / (float) y;
  return z;
}
