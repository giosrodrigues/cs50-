#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int q = 0;
    float v;
    do
    {
        v = get_float("Change owed: ");
    } while (v < 0);

    int c = round(v * 100);

    while (c >= 25)
    {
        if (c >= 25)
        {
            c = c - 25;
            q++;
        }
    }
    while (c >= 10)
    {
        if (c >= 10)
        {
            c = c - 10;
            q++;
        }
    }
    while (c >= 5)
    {
        if (c >= 5)
        {
            c = c - 5;
            q++;
        }
    }
    while (c >= 1)
    {
        if (c >= 1)
        {
            c = c - 1;
            q++;
        }
    }
    printf("%i\n", q);
}