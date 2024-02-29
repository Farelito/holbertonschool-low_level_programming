#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*_strcat - Concatenates two strings.
*@dest: The destination string.
*@src: The source string.
*Return: A pointer to the resulting concatenated string.
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

