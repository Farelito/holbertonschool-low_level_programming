#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *array;
    unsigned int i, j;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    array = malloc(nmemb * size);

    if (array == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < nmemb; i++)
    {
         for (j = 0; j < size; j++)
            {
                array[(i * size) + j] = 0;
            }
           
        }

      return (array);
}