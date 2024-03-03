#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int i, np;

	index = 0;
	while (str[i] != '\0')
		i++;

	half = i / 2;

	if (i % 2 == 1)
		np++;

	while (np < i)
	{
		_putchar(str[np]);
		np++;
	}
	_putchar('\n');
}

