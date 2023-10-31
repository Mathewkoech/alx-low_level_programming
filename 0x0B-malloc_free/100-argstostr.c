#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of program
 *@ac:Arguments count
 *@av:array of arguments
 *Return: NULL or ponter to a string
 */


char *argstostr(int ac, char **av)
{
	int i = 0, total_length = 0, k, j;

	char *concat_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_length += (len(av[i]) + 1);
	}

	concat_string = (char *)malloc(total_length + 1);

	if (concat_string != NULL)
	{
		char *ptr = concat_string;

		for (k = 0; k < ac; k++)
		{
			for (j = 0; av[k][j] != '\0'; j++)
			{
				*ptr = av[k][j];
				ptr++;
			}
		 *ptr = '\n';
		 ptr++;
		}
		ptr = '\0';
	}
	else
	{
		return (NULL);
	}
	return (concat_string);



}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
