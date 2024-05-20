#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};
  int n = get_int("Number: ");
  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == n)
    {
      printf("Found!");
      return 0; // this indicates success
    }
  }
  printf("not found");
  return 1; // this indicates failure
}