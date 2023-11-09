#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers-prints numbers
 *@n:intergers passed
 *@...: A variable number of numbers to be printed.
 *@separator:string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n - 1; ++i)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
