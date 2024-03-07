#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line.
*@s: Pointer to the string to be printed.
* This function recursively prints each character of the string
* pointed to by 's' until the null terminator is encountered,
*and then prints a newline character.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
