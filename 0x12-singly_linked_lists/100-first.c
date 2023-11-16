#include <stdio.h>
void __attribute__((constructor)) print_str(void);

/**
 * print_str - Prints a string before the
 *   main function is executed.
 */
void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
