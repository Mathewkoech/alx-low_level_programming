#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9, followed by a newline
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}
