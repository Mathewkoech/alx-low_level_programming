#include "main.h"
#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	while (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
