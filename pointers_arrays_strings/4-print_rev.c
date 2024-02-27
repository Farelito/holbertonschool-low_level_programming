#include "main.h"
/**
*print_rev - prints a string in reverse followed by a new line
*@s: the string to be printed in reverse
*/
void print_rev(char *s)
{
	int i, j, count;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	count = i;

	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
