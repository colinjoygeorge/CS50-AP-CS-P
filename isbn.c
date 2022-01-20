#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int nthDigit;
    int sum = 0;

    long long isbn = get_long("ISBN:");

    for (int i = 10; i >= 0; i--)
    {
        nthDigit = isbn % 10;
        sum += (nthDigit * i);
        isbn = isbn / 10;
    }

    if (sum % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}