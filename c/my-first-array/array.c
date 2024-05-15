#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int array[6] = {1, 2, 3, 4, 5, 6};
  //arrays are zero indexed. they must have the length declared within [] (which is also how you call a specific value)
  printf("%i - %i - %i - %i - %i - %i\n %i", array[0], array[1], array[2], array[3], array[4], array[5]);
}