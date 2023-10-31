#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int i, y, w;

	y = 0; /* */
	w = 0;/* counting total number of words*/

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			y = 0;
		}
		else if (y == 0)
		{
			y = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **split, *tmp;
	int i, k = 0, len = 0, words, y = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (y)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (y + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				split[k] = tmp - y;
				k++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = i;
	}
	split[k] = NULL;
	return (split);
}
