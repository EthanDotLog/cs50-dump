#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> //gives atoi(string)  which converts a string to a number and malloc (memory allocation)
#include <string.h>

// get the key XXXXXXXXXXX
// this key will be provided when the program is called XXXXXXXXXXXXXXXXX
// if a non valid input or more than expected prompt the user "Usage: ./caesar key"

// formula Ci = (Pi + k) % 26
//         Ci = ith char of ciphertext
//             pi = ith of plain text
//                   k= key

char lowerCaseLetters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                             'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char upperCaseLetters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                             'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int key;
string encipherText(string text);
char encipherChar(char c);

int main(
    int argc,
    string argv[]) // argc is how many arguments - argv is the strings of the provided arguments
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    key = atoi(argv[1]);
    string plainText = get_string("plaintext: ");
    string encipheredText = encipherText(plainText);
    printf("ciphertext: %s\n", encipheredText);
}

string encipherText(string text)
{
    int length = strlen(text);
    char *newString = malloc(length + 1);
    for (int i = 0; i < length; i++)
    {
        newString[i] = encipherChar(text[i]);
    }
    newString[length] = '\0';
    return newString;
}

char encipherChar(char c)
{
    if (isalpha(c) == 0)
    {
        return c;
    }
    else
    {
        char newChar;
        if (isupper(c) == 0) // its lowercase
        {
            int startingPlace;
            for (int i = 0; i < 26; i++)
            {
                if (lowerCaseLetters[i] == c)
                {
                    startingPlace = i;
                }
            }
            int endingPlace = (startingPlace + key) % 26;
            newChar = lowerCaseLetters[endingPlace];
        }
        else // its uppercase
        {
            int startingPlace;
            for (int i = 0; i < 26; i++)
            {
                if (upperCaseLetters[i] == c)
                {
                    startingPlace = i;
                }
            }
            int endingPlace = (startingPlace + key) % 26;
            newChar = upperCaseLetters[endingPlace];
        }
        return newChar;
    }
}
