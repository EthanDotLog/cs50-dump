#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");
if (x < y) 
{
  printf("x(%i) is less than y(%i)\n", x, y);
}
else if (x > y) 
{
  printf("x(%i) is greater than y(%i)\n", x, y);
}
else 
{
  printf("x(%i) is equal to y(%i)\n", x, y);
}
}