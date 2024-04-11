#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted unsigned int number, or 0 if:
 *      - b is NULL.
 *      - One or more characters in the string b is not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;

	conv = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		conv = (conv << 1) + (*b - '0');
		b++;
	}

	return (conv);
}

