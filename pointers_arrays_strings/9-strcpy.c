#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies a string from source to destination
* @dest: destination buffer
* @src: source string
* Return: pointer to the destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';

	return(dest);

}
