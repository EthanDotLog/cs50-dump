#include <stdio.h>
#include <cs50.h>



int remainQuarter(int a);
int divideQuarter(int a);
int remainDime(int a);
int divideDime(int a);
int remainPenny(int a);
int divideNickle(int a);

int main(void)
{
    int changeRequest;
    int count = 0;
    do
    {
        changeRequest = get_int("change total: ");
    }
    while(changeRequest < 1);

    if (changeRequest / 25 >= 1)
    {
        count += divideQuarter(changeRequest);
        printf("Quarters: %i\n", divideQuarter(changeRequest));
        changeRequest = remainQuarter(changeRequest);
    }

    if (changeRequest > 10)
    {
        count += divideDime(changeRequest);
        printf("Dimes: %i\n", divideDime(changeRequest));
        changeRequest = remainDime(changeRequest);
    }

    if (changeRequest > 5)
    {
        count += divideNickle(changeRequest);
        printf("Nickles: %i\n", divideNickle(changeRequest));
    }
    else
    {
        count += remainPenny(changeRequest);
        printf("Pennies: %i\n", remainPenny(changeRequest));
    }

    printf("TOTAL: %i\n", count );
}



int divideQuarter(int a)
{
  return a / 25;
}


int remainQuarter(int a)
{
  return a % 25;
}

int divideDime(int a)
{
  return a / 10;
}


int remainDime(int a)
{
  return a % 10;
}

int divideNickle(int a)
{
  return a / 5;
}


int remainPenny(int a)
{
  return a % 5;
}

