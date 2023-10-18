#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: Returns a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy the source string to the end of the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Null terminator to the end of the concatenated string */
	dest[dest_len + i] = '\0';

	return (dest);
}
