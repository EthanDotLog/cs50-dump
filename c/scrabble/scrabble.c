#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//                      0  1  2  3  4  5   6
int possibleValues[] = {1, 2, 3, 4, 5, 8, 10};
// 1 - a, e, i, l, n, o, r, s, t, u
// 2 - d, g,
// 3 - b, c, m, p,
// 4 - f, h, v, w, y
// 5 - k
// 8 - j, x
//10 - q, z

int findPoints(char letter);
int findPointsTotal(string word);
string findWinner(int a, int b);
int main(void)
{
    string p1Word = get_string("Player 1's word: ");
    string p2Word = get_string("Player 2's word: ");
    string winner = findWinner(findPointsTotal(p1Word), findPointsTotal(p2Word));
    printf("%s\n", winner);
}

int findPoints(char letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'l' || letter == 'n' || letter == 'o' || letter == 'r' || letter == 's' || letter ==  't' || letter == 'u')
    {
        return 1;
    }
    else if (letter == 'd' || letter == 'g')
    {
        return 2;
    }
    else if (letter == 'b' || letter == 'c' || letter == 'm' || letter == 'p')
    {
        return 3;
    }
    else if (letter == 'f' || letter == 'h' || letter == 'v' || letter == 'w' || letter == 'y')
    {
        return 4;
    }
    else if (letter == 'k')
    {
        return 5;
    }
    else if (letter =='j' || letter == 'x')
    {
        return 8;
    }
    else if (letter =='q' || letter == 'z')
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

int findPointsTotal(string word)
{
    int wordLength = strlen(word);
    int total = 0;
    for (int i = 0; i < wordLength; i++)
    {
        total += findPoints(tolower(word[i]));
    }
    return total;
}

string findWinner(int a, int b)
{
    if (a > b)
    {
        return "Player 1 wins!";
    }
    if (a < b)
    {
        return "Player 2 wins!";
    }
    else
    {
        return "Tie!";
    }
}
