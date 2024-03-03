#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: String of variable pointer
 * Return: String that is encoded
 */
char *leet(char *c)
{
	int i, j;
	char *tab = c;
	char *leetChars = {'A', 'E', 'O', 'T', 'L'};
	char *normalChars = {4, 3, 0, 7, 1};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == leetChars[j])
			{
				c[i] = normalChars[j];
			}
		}
	}

	return (tab);
}
