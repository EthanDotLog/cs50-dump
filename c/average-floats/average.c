#include <stdio.h>
#include <cs50.h>

void assignNumbers(double array[], int request);
double findAverage(double array[], int length);
int main(void)
{
  int requestedTotal = get_int("Hello and welcome to the double average provider deluxe\n Please tell me..\nHow many numbers we are working with today? ");
  double array[requestedTotal];
  assignNumbers(array, requestedTotal);
  double average = findAverage(array, requestedTotal);
  printf("Your average is: %f\n", average);
}

void assignNumbers(double array[], int request)
{
  for (int i = 0; i < request; i++ )
  {
    array[i] = get_double("%i. Float: ", i + 1);
  }
}

double findAverage(double array[], int length)
{
  double total;
  for (int i = 0; i < length; i++)
  {
    total += array[i];
  }
  printf("fun fact, your total is: %f :P\n", total);
  return total / length;
}