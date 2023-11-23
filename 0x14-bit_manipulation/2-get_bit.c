#include "main.h"

/**
 *get_bit-retuns value of bit at given index
 *@n:integer unsigned
 *@index:index
 *Return: bit value at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit_value = (n >> index) & 1;
	return (bit_value);
}
