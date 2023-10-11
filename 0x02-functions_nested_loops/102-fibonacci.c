#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 50;
	long long int a = 1, b = 2, next;

	printf("%lld, %lld", a, b);

	for (int i = 2; i < n; i++)
	{
		next = a + b;
		printf(", %lld", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}
