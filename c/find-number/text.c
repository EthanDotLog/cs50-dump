#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string originalText = get_string("What text would you like the ascii code for? ");
  int length = strlen(originalText);
  for (int i = 0; i < length; i++)
  {
    printf("Original Letter: %c --- ASCII Code: %i\n", originalText[i], originalText[i]);
  }
}