#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
    {
        int len_of_argv = strlen(argv[1]);
        for (int i = 0; i < len_of_argv; i ++)
        {
            int restz = isalpha(argv[1][i]);
            if (restz != 0)
            {
                printf("Usage: ./caesar key \n");
                return 1;
            }
        }
        int k = atoi(argv[1]); // get the ceasar KEY value convert into integar

        string s = get_string("plaintext: "); // get text
        printf("ciphertext: "); // print out cipher
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); // print out lowercase with key
            } // if it it between uppercase A and C
            else if (s[i] >= 'A' && s[i] <= 'Z')
            { 
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // print out uppercase with key
            }
            else
            {
                printf("%c", s[i]);
            }
        }

        printf("\n");
        return 0;
    }

    else
    {

        printf("Usage: ./caesar key\n");
        return 1;
    }
}