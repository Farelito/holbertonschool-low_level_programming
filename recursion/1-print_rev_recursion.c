#include "main.h"

/**
*_print_rev_recursion - Prints a string in reverse using recursion.
*@s: Pointer to the string to be printed in reverse.
* This function recursively prints each character of the string
* pointed to by 's' in reverse order.
*/
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
