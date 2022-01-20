#include <cs50.h>
#include <stdio.h> //it's a library. Code that someone else wrote
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) //starts the program. Main entry point
{
    string text = get_string("Text: ");

    int letterscount = 0;  //count letters
    int wordcount = 1;     //count words
    int sentencecount = 0; //count sentences

    for (int i = 0; i < strlen(text); i++)
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letterscount++; //execute this statment
        }
        else if (text[i] == ' ')
        {
            wordcount++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencecount++;
        }

    float grade = 0.0588 * (100 * (float)letterscount / (float)wordcount) - 0.296 * (100 * (float)sentencecount /
                  (float)wordcount) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int)round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n"); //taking input. It's what shows on the
    }
}