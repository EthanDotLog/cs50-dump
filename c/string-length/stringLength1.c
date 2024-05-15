#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //get a string
  string name = get_string("name: ");

  //start counter
  int n = 0;
  //while the char in name isnt NUL aka the '\0' char value
  while (name[n] != '\0')
  {
    n++;
  }
  //print the count, which will be the length up to the escape char
  printf("%i\n", n);
}