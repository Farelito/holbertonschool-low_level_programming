#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int count, spc;

	for (count = 0; count < n; count++)
	{
		for (spc = 0; spc < count; spc++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	if (n < 0)
	{
		_putchar('\n');
		n++;
	}
	}
	_putchar('\n');
}
