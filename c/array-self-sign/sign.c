#include <stdio.h>
#include <cs50.h>

int array [100];


void zeroStart(void);
void oneStart(void);
void makeArrayString(void);

int main(void)
{
  zeroStart();
  makeArrayString();
  oneStart();
  makeArrayString();
  printf("finished flawless!!!!");
}

void zeroStart(void)
{
  for (int i = 0; i < 100; i++)
  {
    array[i] = i;
    printf("Array[%i] assigned value of %i\n", i, i);
  }
}

void makeArrayString(void)
{
  string returnString = "";
  for (int i = 0; i < 100; i++)
  {
    printf("%i, ", array[i]);
  }
  printf("\n");
}

void oneStart(void)
{
  int x = 1;
  for (int i = 0; i < 100; i++)
  {
    array[i] = x;
    printf("Array[%i] assigned value of %i\n", i, x);
    x++;
  }
}