#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double celsius = get_double("C:");
    double fahrenheit = (celsius * 9 / 5) + 32;
    printf("F:");
    printf("%.1f\n", fahrenheit);
}