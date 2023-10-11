#include <stdio.h>

/**
 * main - Calculate and print the first 98 Fibonacci numbers
 *
 * This function calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by commas.
 *
 * Return: Always Success (0).
 */
int main(void)
{
	int n = 98;
	unsigned long a = 1, b = 2;

	printf("%lu, %lu", a, b);

	for (int i = 2; i < n; i++)
	{
		unsigned long next = a + b;

		printf(", %lu", next);

		a = b;
		b = next;

	}

	printf("\n");
	return (0);
}
