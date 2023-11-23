#include "main.h"
/**
 * flip_bits -returns the number of bits to be flipped
 * @n:number
 * @m:number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	unsigned long int result = n ^ m;

	for (bits = 0; result != 0;)
	{
		if ((result & 1) == 1)
			bits++;
		result = result >> 1;
	}
	return (bits);
}
