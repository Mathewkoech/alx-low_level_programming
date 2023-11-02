#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concanates two strings
 * while second string is n value
 *@s1:first string
 *@s2:second string
 *@n:number of bytes of s2 to concatenate to s1.
 *Return:pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		len++;

	concat_string = malloc(sizeof(char) * (len + 1));

	if (concat_string == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
		concat_string[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat_string[len++] = s2[i];

	concat_string[len] = '\0';
	return (concat_string);
}
