#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute the absolute value
 *
 * Return: The absolute value of n or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
