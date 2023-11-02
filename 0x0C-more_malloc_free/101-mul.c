#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
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
	if (s[i] < '0' || s[i] > '9')
	{
		return (0);
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
 *main-multiply 2 numbers
 *@argc:arguments count
 *@argv:vector argument
 *Return: return 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i, *result, len1, len2, len, digit1, digit2, carry, x = 0;

	s1 = argv[1]; s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2 + 1; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len] - '0';
		carry = 0;
	}
	for (len2 = (len2) - 1; len2 >= 0; len2--)
	{
		digit2 = s2[len] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
	}
	if (carry > 0)
	{
		result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
