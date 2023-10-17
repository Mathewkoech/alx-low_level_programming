#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: A pointer to the string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
