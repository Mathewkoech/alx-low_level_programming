#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if the strings are equal,
 * +ve if s1 is greater, -ve if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	result = s1[i] - s2[i];

	return (result);
}
