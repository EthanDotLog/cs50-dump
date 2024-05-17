#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> //gives atoi(string)  which converts a string to a number
#include <string.h>

char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char lowerCaseKey[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                         'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char upperCaseKey[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int findPlace(char c);
bool repeats(string text, char c);

int main(int argc, string argv[])
{
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key(26 letters)\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0 || repeats(argv[1], argv[1][i]))
        {
            printf("Usage: ./substitution key(must be 26 LETTERS w/o spaces)\n");
            return 1;
        }
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        lowerCaseKey[i] = tolower(argv[1][i]);
        upperCaseKey[i] = toupper(argv[1][i]);
    }
    string startingText = get_string("plaintext: ");
    char subString[strlen(startingText) + 1];
    subString[strlen(startingText)] = '\0';
    for (int i = 0; i < strlen(startingText); i++)
    {
        if (isalpha(startingText[i]) == 0)
        {
            subString[i] = startingText[i];
        }
        else if (isupper(startingText[i]) != 0)
        {
            subString[i] = upperCaseKey[findPlace(startingText[i])];
        }
        else if (islower(startingText[i]) != 0)
        {
            subString[i] = lowerCaseKey[findPlace(startingText[i])];
        }
    }
    printf("ciphertext: %s\n", subString);
}

int findPlace(char c)
{
    int place;
    for (int i = 0; i < 26; i++)
    {
        if (tolower(c) == letters[i])
        {
            place = i;
        }
    }
    return place;
}

void printInfo(string subString)
{
    printf("ciphertext: ");
    for (int i = 0; i < strlen(subString); i++)
    {
        printf("%c", subString[i]);
    }
    printf("\n");
}

bool repeats(string text, char c)
{
    int count = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (text[i] == c)
        {
            count++;
        }
    }
    return count != 1;
}
