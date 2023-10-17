#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int x, y;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (x = 0, y = length - 1; x < y; x++, y--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
}
