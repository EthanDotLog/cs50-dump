#include <stdio.h>
#include <cs50.h>


void meow(int n);
int main(void) 
{
  int m = get_int("How many times shall i meow? ");
  meow(m);
}

void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}