#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring within a string.
 * @haystack:source
 * @needle: The substring to locate.
 *
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}
