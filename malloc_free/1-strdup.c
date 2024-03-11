#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_strdup - Duplicates a string in memory.
*@str: String to duplicate.
* Return: Pointer to the duplicated string, or NULL on failure.
*/
char *_strdup(char *str)
{
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	array = (char *)malloc(strlen(str) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	strcpy(array, str);

	return (array);
}
