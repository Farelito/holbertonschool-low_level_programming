#include "main.h"
/**
* rev_string -  string reverse
*
* @s: string pointer to be used
*
* Return: void
**/
void rev_string(char *s)
{
	int i = 0, rev = 0;
	char tmp;

	while (s[rev++])
	{
		i++;
	}
	for (rev = i - 1; rev >= i / 2; rev--)
	{
		tmp = s[rev];
		s[rev] = s[i - rev - 1];
		s[i - rev - 1] = tmp;
	}

}

