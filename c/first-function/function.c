#include <stdio.h>
#include <cs50.h>

void countdown(int n);
int main(void)
{
  int countRequest = get_int("How many times should I count? ");
  countdown(countRequest);
}

void countdown(int n) 
{
  for (int i = 1; i <= n; i++)
  {
    if (i < n)
    {
      printf("%i\n", i);
    } 
    else if (i == n)
    {
      printf("%i - we made it\n", i);
    }
    else
    {
      printf("not a valid number mate");
    };
  };
};