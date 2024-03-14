#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*array_range - Creates an array of integers from min to max.
*@min: Minimum value.
*@max: Maximum value.
*Return: Pointer to the allocated array or NULL on failure.
*/
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
