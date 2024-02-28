#include "main.h"
#include <stdio.h>
/**
* puts_half - prints the second half of a string
* @str: the string to be printed
*/
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
		_putchar('\n');
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	for (j = n; str[j] != '\0'; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');

}

