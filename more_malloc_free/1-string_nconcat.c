#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;

	if (n == strlen(s2))
		n = strlen(s2);

	array = (char *)malloc(strlen(s1) + n + 1);

	if (array == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(array, s1);

	if (n > 0 && s2 != NULL)
		strncat(array, s2, n);

	return (array);

}
