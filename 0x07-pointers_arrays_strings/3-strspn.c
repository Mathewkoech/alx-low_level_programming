#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The set of acceptable characters.
 *
 * Return: The number of bytes in the initial segment of 's' which consist only
 *         of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
int found = 0;
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}

if (!found)
{
return (count);
}

s++;
count++;
}

return (count);
}
