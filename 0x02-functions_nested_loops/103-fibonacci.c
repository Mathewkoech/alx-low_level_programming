#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int max = 4000000;
	long int num1 = 1, num2 = 2, next, sum = 0;

	while (num2 <= max)
	{
		if (num2 % 2 == 0)
		{
			sum += num2;
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("%ld\n", sum);
	return (0);
}
