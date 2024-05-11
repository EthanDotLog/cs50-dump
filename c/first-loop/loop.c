#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int count = 0;
  while (count <= 10)
  {
    if (count == 0)
    {
    printf("Alright everyone - here we go\nThe current count iteration is %i - we are about to start!\n", count);
    }
    else if (count == 1)
    {
    printf("GO!!!!!!!!\nThe current count iteration is %i\n", count);
    }
    else if (count <= 8) 
    {
    printf("\nThe current count iteration is %i\n", count);
    }
    else if (count == 9)
    {
    printf("\nThe current count iteration is %i - we are close!\n", count);
    }
    else 
    {
    printf("\nThe current count iteration is %i - we are done!\n", count);
    }
  count++;
  }
  printf("\n\n\nlets do this again sometime!!!\n\n\n");
}