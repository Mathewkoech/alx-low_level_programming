#include "main.h"

/**
 *set_bit-sets the value of a bit at a given index
 *@n:pointer
 *@index:given index
 *Return:sets the value of a bit to 1 at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result;

	if (index > (sizeof(unsigned long) * 8))
		return (-1);

	result = 1 << index;
	*n = *n | result;
	return (1);
}
