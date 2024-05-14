#include <cs50.h>
#include <stdio.h>

// validCC options all return the brand of a card (if valid) and invalid if so
string validCC16(unsigned long CCNumber);
string validCC15(unsigned long CCNumber);
string validCC13(unsigned long CCNumber);
// this finds the length of and requested number - must be LONG or will display incorrectly
int findLength(long x);
// splits a 2 digit number and adds them together. type is LONG for formating
int subMath(unsigned long number);
// checks the first 2 digits of a card for brand type
char cardBrand(int n);

int main(void)
{
    unsigned long number = get_long("card #: ");
    string validCard;

    if (findLength(number) == 13)
    {
        validCard = validCC13(number);
    }
    else if (findLength(number) == 15)
    {
        validCard = validCC15(number);
    }
    else
    {
        validCard = validCC16(number);
    }

    printf("%s\n", validCard);
}

string validCC16(unsigned long CCNumber)
{
    unsigned long number = CCNumber;
    int number1 = (number % 10); // 1
    number /= 10;
    int number2 = subMath(number);
    number /= 10;
    int number3 = (number % 10); // 3
    number /= 10;
    int number4 = subMath(number);
    number /= 10;
    int number5 = (number % 10); // 5
    number /= 10;
    int number6 = subMath(number);
    number /= 10;
    int number7 = (number % 10); // 7
    number /= 10;
    int number8 = subMath(number);
    number /= 10;
    int number9 = (number % 10); // 9
    number /= 10;
    int number10 = subMath(number);
    number /= 10;
    int number11 = (number % 10); // 11
    number /= 10;
    int number12 = subMath(number);
    number /= 10;
    int number13 = (number % 10); // 13
    number /= 10;
    int number14 = subMath(number);
    number /= 10;
    char brand = cardBrand(number);
    int number15 = (number % 10); // 15
    number /= 10;
    int number16 = subMath(number);
    int finalA = number1 + number3 + number5 + number7 + number9 + number11 + number13 + number15;
    int finalB = number2 + number4 + number6 + number8 + number10 + number12 + number14 + number16;
    int final = (finalA + finalB) % 10;
    char isValid = 'y';
    if (final == 0)
    {
        isValid = 'y';
    }
    else
    {
        isValid = 'n';
    }

    if (isValid == 'y')
    {
        if (brand == 'V')
        {
            return "VISA";
        }
        else if (brand == 'M')
        {
            return "MASTERCARD";
        }
        else
        {
            return "INVALID";
        }
    }
    else
    {
        return "INVALID";
    }
}

string validCC15(unsigned long CCNumber)
{
    unsigned long number = CCNumber;
    int number1 = (number % 10); // 1
    number /= 10;
    int number2 = subMath(number); // 2
    number /= 10;
    int number3 = (number % 10); // 3
    number /= 10;
    int number4 = subMath(number); // 4
    number /= 10;
    int number5 = (number % 10); // 5
    number /= 10;
    int number6 = subMath(number); // 6
    number /= 10;
    int number7 = (number % 10); // 7
    number /= 10;
    int number8 = subMath(number); // 8
    number /= 10;
    int number9 = (number % 10); // 9
    number /= 10;
    int number10 = subMath(number); // 10
    number /= 10;
    int number11 = (number % 10); // 11
    number /= 10;
    int number12 = subMath(number); // 12
    number /= 10;
    int number13 = (number % 10); // 13
    number /= 10;
    char brand = cardBrand(number);
    int number14 = subMath(number); // 14
    number /= 10;
    int number15 = number; // 15
    int finalA = number1 + number3 + number5 + number7 + number9 + number11 + number13 + number15;
    int finalB = number2 + number4 + number6 + number8 + number10 + number12 + number14;
    int final = (finalA + finalB) % 10;
    char isValid = 'y';
    if (final == 0)
    {
        isValid = 'y';
    }
    else
    {
        isValid = 'n';
    }

    if (isValid == 'y')
    {
        if (brand == 'A')
        {
            return "AMEX";
        }
        else
        {
            return "INVALID";
        }
    }
    else
    {
        return "INVALID";
    }
}

string validCC13(unsigned long CCNumber)
{
    unsigned long number = CCNumber;
    int number1 = (number % 10); // 1
    number /= 10;
    int number2 = subMath(number); // 2
    number /= 10;
    int number3 = (number % 10); // 3
    number /= 10;
    int number4 = subMath(number); // 4
    number /= 10;
    int number5 = (number % 10); // 5
    number /= 10;
    int number6 = subMath(number); // 6
    number /= 10;
    int number7 = (number % 10); // 7
    number /= 10;
    int number8 = subMath(number); // 8
    number /= 10;
    int number9 = (number % 10); // 9
    number /= 10;
    int number10 = subMath(number); // 10
    number /= 10;
    int number11 = (number % 10); // 11
    number /= 10;
    char brand = cardBrand(number);
    int number12 = subMath(number); // 12
    number /= 10;
    int number13 = number; // 13
    int finalA = number1 + number3 + number5 + number7 + number9 + number11 + number13;
    int finalB = number2 + number4 + number6 + number8 + number10 + number12;
    int final = (finalA + finalB) % 10;
    char isValid = 'y';
    if (final == 0)
    {
        isValid = 'y';
    }
    else
    {
        isValid = 'n';
    }

    if (isValid == 'y')
    {
        if (brand == 'V')
        {
            return "VISA";
        }
        else
        {
            return "INVALID";
        }
    }
    else
    {
        return "INVALID";
    }
}

int findLength(long x)
{
    if (x >= 1000000000000000)
        return 16;
    if (x >= 100000000000000)
        return 15;
    if (x >= 10000000000000)
        return 14;
    if (x >= 1000000000000)
        return 13;
    if (x >= 100000000000)
        return 12;
    if (x >= 10000000000)
        return 11;
    if (x >= 1000000000)
        return 10;
    if (x >= 100000000)
        return 9;
    if (x >= 10000000)
        return 8;
    if (x >= 1000000)
        return 7;
    if (x >= 100000)
        return 6;
    if (x >= 10000)
        return 5;
    if (x >= 1000)
        return 4;
    if (x >= 100)
        return 3;
    if (x >= 10)
        return 2;
    return 1;
}

int subMath(unsigned long number)
{
    int number2base = (number % 10) * 2; // 2
    int number2a = (number2base % 10);
    int number2b = number2base / 10;
    return number2a + number2b;
}

char cardBrand(int n)
{
    char brand;
    if (n == 34 || n == 37)
    {
        brand = 'A';
    }
    else if (n == 51 || n == 52 || n == 53 || n == 54 || n == 55)
    {
        brand = 'M';
    }
    else if (n == 40 || n == 41 || n == 42 || n == 43 || n == 44 || n == 45 || n == 46 || n == 47 ||
             n == 48 || n == 49)
    {
        brand = 'V';
    }
    else
    {
        brand = 'I';
    }
    return brand;
}
