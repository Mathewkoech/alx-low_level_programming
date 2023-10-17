#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 *
 * Return: the generated password
 */

int main(void)
{
/* random number generator with the current time. */
srand(time(0));

/*  character array to store the generated password. */
char password[16];

for (int i = 0; i < 15; i++) {
    password[i] = (char) (rand() % 26 + 'a');
}

/* Terminate the password string with a null terminator. */
password[15] = '\0';

/* Print the generated password to the console using putchar. */
for (int j = 0; password[j] != '\0'; j++) {
putchar(password[j]);
}

putchar('\n');

return (0);
}
