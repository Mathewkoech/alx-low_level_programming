#include <stdio.h>

/**
 * main - Prints the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	long count;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	for (count = 3; count <= number / 2; count += 2)
	{
		while (number % count == 0)
		{
			largestPrime = count;
			number /= count;
		}
	}

	if (number > 2)
	{
		largestPrime = number;
	}

	printf("%ld\n", largestPrime);
	return (0);
}
