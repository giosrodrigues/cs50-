#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int s = 0;
    int e = 0;
    int b = 0;
    int d = 0;
    int t = 0;
    int y = 0;
    // Prompt user fot the start size of population
    do
    {
        s = get_int("Start size: ");
    } while (s < 9);

    // Prompt user for the end size of population
    do
    {
        e = get_int("End size: ");
    } while (e < 9);
    // Do the calculation
    do
    {
        // Born llamas
        b = (float)s / 3;
        // Dead llamas
        d = (float)s / 4;
        // Total of the year
        t = s + b - d;
        // Count the year
        y++;
        // New start size of population
        s = t;
    } while (t < e);

    if (t == e)
    {
        // Total of years
        printf("Years: %i\n", y);
    }
}