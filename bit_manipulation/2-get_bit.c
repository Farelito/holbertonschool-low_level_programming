#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask, bit_value;

	mask = 1 << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
