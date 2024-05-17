// gcc -o readability readability.c -lcs50 -lm  must include -lm for math.h
#include <cs50.h>
#include <ctype.h> // CHECK THIS FOR INFO ON FINDING SPACES
#include <math.h>
#include <stdio.h>
#include <string.h>

// words are the number of spaces + 1 XXXXXXXXXX
// . ? ! all will count as the end of a sentence. XXXXXXXXXXXX
// so the number of them would be the number of sentences XXXXXXXXXXXXXX
// Coleman-Liau index: index = 0.0588 * L - 0.296 * S - 15.8
// where L is the average number of letters per 100 words in the text, and S is the average number
// of sentences per 100 words in the text.
//
// !!!!!!!!!! round to nearest whole number !!!!!!!!!!
int numberOfWords(string text, int l);
int numberOfSentences(string text, int l);
int numberOfLetters(string text, int l);
double average(int c, int l);
int readingLevel(double l, double i);

int main(void)
{
    string userText = get_string("Text: ");
    int length = strlen(userText);
    int words = numberOfWords(userText, length);
    int sentences = numberOfSentences(userText, length);
    int letters = numberOfLetters(userText, length);
    double averageWords = average(letters, words);
    double averageSentences = average(sentences, words);

    printf(
        "words: %i\nsentences: %i\nletters: %i\nA-words: %f\nA-sentence: %f\nreading-level: %i\n",
        words, sentences, letters, averageWords, averageSentences,
        readingLevel(averageWords, averageSentences));
}

// Start da functions

// finds numbr of words by getting the length of the text and finding the spaces.
int numberOfWords(string text, int l)
{
    int spaces = 0;
    for (int i = 0; i < l; i++)
    {
        if (isspace(text[i]) != 0)
        {
            spaces++;
        }
    }
    // add one so it accounds for the first word
    int words = spaces + 1;
    return words;
}

int numberOfSentences(string text, int l)
{
    int sentences = 0;
    for (int i = 0; i < l; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

int numberOfLetters(string text, int l)
{
    int letters = 0;
    for (int i = 0; i < l; i++)
    {
        if (isalnum(text[i]) != 0)
        {
            letters++;
        }
    }
    return letters;
}

double average(int a, int b)
{
    double averageBase = (double) a / b;
    return averageBase * 100;
}

int readingLevel(
    double l,
    double i) // Coleman-Liau index: index = 0.0588 * L - 0.296 * S - 15.8   l-letters s-strings
{
    double colemanLiau = 0.0588 * l - 0.296 * i - 15.8;
    int grade = (int) round(colemanLiau);
    return grade;
}
