#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 98;
	unsigned int a = 1, b = 2, next;

	printf("%u, %u", a, b);

	for (int i = 2; i < n; i++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}
