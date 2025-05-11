#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage ./caesar key\n");
                return 1;
            }
        }

        string c = get_string("Plaintext: ");
        printf("Ciphertext: ");

        for (int i = 0, n = strlen(c); i < n; i++)
        {
            if (isalpha(c[i]))
            {
                int p;
                int k = atoi(argv[1]);

                if (islower(c[i]))
                {
                    p = c[i] - 'a';
                    c[i] = (p + k) % 26;
                    c[i] += 'a';
                }
                else
                {
                    p = c[i] - 'A';
                    c[i] = (p + k) % 26;
                    c[i] += 'A';
                }
            }
            printf("%c", c[i]);
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage. /caser key\n");
        return 1;
    }
}