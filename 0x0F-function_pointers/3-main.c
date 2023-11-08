#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point for the calculator.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always (0)success
*exit with status 98, 99, or 100.
*/

int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2;
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
