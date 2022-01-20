#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;
    printf("How many steps high is the pyramid? ");
    h = get_int("");
    
    while (h < 1 || h > 8)
    {
        printf("The height must be a whole number between zero and 24. Try again: ");
        h = get_int("");
    }

    for (int i = 0; i < h; i++)   
    {

        for (int s = 0; s < h - i - 1 ; s++)
        {
            printf(" ");
        }   

        for (int x = h - i ; x <= h; x++)
        {
            printf("#");

        }
        
        printf("  ");

        for (int x = h - i ; x <= h; x++)
        {
            printf("#");
        }

        printf("\n");
    }
}
