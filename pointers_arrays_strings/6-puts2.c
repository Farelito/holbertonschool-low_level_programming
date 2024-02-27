#include "main.h"
/**
* puts2 - Write a function that prints every other character of a string
*starting with the first character, followed by a new line.
* @s: This pointer point to a char or string
*str: pointer to the string
*/
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if(i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar ('\n');

}
