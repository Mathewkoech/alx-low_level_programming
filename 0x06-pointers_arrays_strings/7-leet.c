#include "main.h"

/**
 * leet - Encodes a string in 1337
 *
 * @str: String
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int x = 0;
	int y;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[x] != '\0'; x++)
	{
		for (x = 0; y <= 9; y++)
		{
			if (s[y] == str[x])
			{
				str[x] = s1[y];
			}
		}
	}
	return (str);
}
