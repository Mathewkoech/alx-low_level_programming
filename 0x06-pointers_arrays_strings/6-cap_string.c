#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The string passed
 *
 * Return:pointer to modified string.
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
}

return (s);
}
