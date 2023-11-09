#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char type;
	int i;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		type = format[i];

		switch (type)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%.2f", va_arg(args, double));
				break;
	                case 's':
				const char *str = va_arg(args, const char *);

				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
		       default:
			       break;
		}

	}
	va_end(args);
	printf("\n");
}
