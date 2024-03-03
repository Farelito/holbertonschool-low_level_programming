#include "main.h"

/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 * Return: Copied string with the number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[iindex];
		i++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		i++;
	}

	return (dest);
}
