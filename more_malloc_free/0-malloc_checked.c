#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    char *array;
    array = (char *)malloc(b);

    if (array == NULL)
    {
        return (NULL);
         exit (98);
    }
   return (array);
}