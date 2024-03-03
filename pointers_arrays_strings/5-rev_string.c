#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */
void rev_string(char *c)
{
	int i = 0, rev = 0;
	char tmp;

	while (c[rev++])
	{
		i++;
	}
	for (rev = i - 1; rev >= i / 2; rev--)
	{
		tmp = c[rev];
		c[rev] = c[i - rev - 1];
		c[i - rev - 1] = tmp;
	}

}

