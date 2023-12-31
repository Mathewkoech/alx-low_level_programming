#include "main.h"
/**
 * _sqrt_recursion - returns the sqrt of a number
 * @n: first parameter
 *
 * Description: uses recursion
 * Return: Always(0) Success
 */
int _sqrt_recursion(int n)
{
	return (sqrt_x(0, n));
}

/**
 *sqrt_x-returns natural square root of number
 *@x: integer to be squared
 *@y:integer square of x
 * Return: Integer
*/

int sqrt_x(int x, int y)
{
	if (x * x > y)
	{
		return (-1);
	}
	if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (sqrt_x(x + 1, y));

	}
}
