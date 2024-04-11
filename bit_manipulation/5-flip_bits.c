#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int flipped;

	flipped = n ^ m;
	count = 0;

	while (flipped)
	{
		count += flipped & 1;
		flipped >>= 1;
	}

	return (count);
}
