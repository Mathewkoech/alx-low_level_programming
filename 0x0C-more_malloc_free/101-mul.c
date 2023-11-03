#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

int is_digit(char *s);

int _strlen(char *str);

void errors(void);

int *perform_multiplication(char *s1, char *s2, int len, int len1, int len2);

void print_result(int *result, int len);
/**
 *is_digit-checks if it is a digit number
 *@s:string to be checked
 *Return: return 0 if nondigit found
 *else 1 if digit is found
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 *errors-handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *main-multiply 2 positive numbers
 *@argc:count of arguments passed into a program
 *@argv:array of pointer to the arguments
 *Return:Always (0)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len;
	int *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		errors();
	}
	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = perform_multiplication(s1, s2, len, len1, len2);

	print_result(result, len);

	free(result);

	return (0);
}
/**
 * perform_multiplication - Performs the multiplication
 *of two numbers represented as strings.
 * @s1: The first number as a string.
 * @s2: The second number as a string.
 * @len: The length of the result buffer.
 * @len1: The length of the first number.
 * @len2: The length of the second number.
 * Return: A pointer to the result of the multiplication.
*/

int *perform_multiplication(char *s1, char *s2, int len, int len1, int len2)
{
	int i, *result, digit1, digit2, carry = 0;
	int j;
	int sum;

	result = malloc(sizeof(int) * len);
	if (!result)
	{
		errors();
	}
	for (i = 0; i < len; i++)
	{
		result[i] = 0;
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			sum = result[i + j + 1] + (digit1 * digit2) + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		if (carry > 0)
		{
			result[i + j + 1] += carry;
		}
	}
	return (result);
}


/**
 * print_result - Prints the result of the multiplication.
 * @result: The result of the multiplication.
 * @len: The length of the result.
 */
void print_result(int *result, int len)
{
	int i, x = 0;

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
		{
			x = 1;
		}
		if (x)
		{
			_putchar(result[i] + '0');
		}
	}
	if (!x)
	{
		_putchar('0');
	}
	_putchar('\n');
}
