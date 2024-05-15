#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
  //get a string
  string name = get_string("string me: ");
  int length = string_length(name);

  //print the count, which will be the length up to the escape char
  printf("%i\n", length);
}

int string_length(string s)
{
  //start counter
  int n = 0;
  //while the char in name isnt NUL aka the '\0' char value
  while (s[n] != '\0')
  {
    n++;
  }
  return n;
}