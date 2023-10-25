#include "main.h"
#include <stdio.h>

int compare(char *, int);
int length(char *);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if the string is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
int i;
i = length(s);
return (compare(s, i - 1));
}
/**
 * length - returns the length of a string
 * @s: the string to be checked
 * Return: the length of the string @s
 */
int length(char *s)
{
if (*s != '\0')
{
return (1 + length(s + 1));
}
return (0);
}

/**
 * compare - checks if a string is a palindrome
 * @s:string to check
 * @i: length of the string
 * Return: 1 if the string is palindrome otherwise 0
 */

int compare(char *s, int i)
{
if (*s != s[i])
{
return (0);
}
if (i == 0 || i == 1)
{
return (1);
}
return (compare(s + 1, i - 2));
}
