#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: A pointer to the number whose bit is to be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, size;

	size =  sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);

	mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
