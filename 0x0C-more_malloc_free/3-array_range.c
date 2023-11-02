#include <stdlib.h>
#include "main.h"

/**
 *array_range-creates an array of integers
 *@min:minimum integer
 *@max: maximum integer
 *Return:the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *num;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;
	num = malloc(sizeof(int) * j);

	if (num == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		num[i] = min;
		min++;
	}

	return (num);
}
