#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    char password[16]; 
    int r;

    for (int i = 0; i < 15; i++)
    {
        r = rand() % 62;

        if (r >= 0 && r <= 25)
        {
            password[i] = 'A' + r;
        }
        else if (r >= 26 && r <= 51)
        {
            password[i] = 'a' + (r - 26);
        }
        else
        {
            password[i] = '0' + (r - 52);
        }

        putchar(password[i]);
    }

    password[15] = '\0';

    putchar('\n');

    return (0);
}
