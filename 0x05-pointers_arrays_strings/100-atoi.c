#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;  /* Initialize as positive */

	/* Skip leading whitespace */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	/* Check for the sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Process the digits */
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
