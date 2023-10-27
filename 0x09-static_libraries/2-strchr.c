#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of
 *the character c in the string s,
 *or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
