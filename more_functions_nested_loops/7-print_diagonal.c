#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int i, count;
if (n > 0)
{
for (i = 0; i < n; i++)
	{
	for (count = 0; count < i; count++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}

}
