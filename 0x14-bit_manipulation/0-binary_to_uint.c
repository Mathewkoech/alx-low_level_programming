#include "main.h"

/**
*binary_to_uint-entry
*@b:string to be converted
*Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	return (result);
}
