#include "main.h"
#include <stdio.h>

/**
 *prime_b - returns prime numbers
 *@a:integer increment parameter
 *@b:integer used
 *Return:integer
 */


int prime_b(int a, int b)
{
	if (a <= 1 || (a % b == 0 && a != b))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_b(a, b + 1));
}
/**
 *is_prime_number - returns 1 if n is prime number
 *@n: integer
 *Return: Always (0)
 */

int is_prime_number(int n)
{
	return (prime_b(n, 2));
}
