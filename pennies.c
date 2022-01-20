#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long pennies ;
    int days;

    do
    {
        days = get_int("Days in month:");
    }
    while (days < 28 || days > 31);

    do
    {
        pennies = get_long("Pennies on the First Day:");
    }
    while (pennies <= 0);

    long long total = 0;

    for (int i = 0; i < days; i++)
    {
        total += pennies;
        pennies *= 2;
    }

    double dollar = (double)total / 100;

    printf("$%.2f\n", dollar);

}