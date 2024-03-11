#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height)
{
    int i, j;
    int **array;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    array = (int **)malloc(height + 1);
     if (array == NULL)
    {
        return (NULL);
    }

     for (i = 0; i < height; i++)
    {
       array[i] = (int **)malloc(width + 1);
    
    if (array[i] == NULL)
    {
        for (j = 0; i < j; j++)
        {
            free(array[j]);
        }
    }
     free(array);
    return NULL;
    }
    

    for (i = 0; i < width; i++)
    {
        array[i][j] = 0;
    }

   
    return (array);
}