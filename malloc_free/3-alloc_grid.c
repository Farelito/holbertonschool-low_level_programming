#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the allocated 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);

		return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}



