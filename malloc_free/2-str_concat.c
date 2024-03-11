#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*str_concat - Concatenates two strings
*@s1: First string
*@s2: Second string
*Return: Pointer to the concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *array;

	array = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (array == NULL)
		return (NULL);

	if (s1 != NULL)
    {
        strcpy(array, s1);
    }
        
    if (s2 != NULL)
    {
        strcat(array, s2);
    }
        

	return (array);
}
