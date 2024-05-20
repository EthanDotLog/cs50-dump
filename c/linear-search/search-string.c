#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  string s = get_string("Text: ");
  for (int i = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found!");
      return 0; // this indicates success
    }
  }
  printf("not found");
  return 1; // this indicates failure
}