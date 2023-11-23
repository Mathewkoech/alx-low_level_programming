#include "main.h"

/**
*clear_bit-sets the value of a bit at a given index to 0
*@n:pointer
*@index:given index
*Return:sets the value of a bit to 0 at a given index
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	result = ~(1 << index);
	*n = *n & result;
	return (1);
}
