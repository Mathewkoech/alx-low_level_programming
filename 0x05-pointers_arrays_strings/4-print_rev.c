#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
