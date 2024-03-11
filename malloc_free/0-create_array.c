#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;
    
   

    if (size == 0)
    {
        return (NULL);
    }

        array = (char *)malloc(size + 1); 

         if (array == NULL)
        {
            return NULL;
        }
            else
            {

                for (i = 0; i < size; i++)
                {
                array[i] = c;
                }
            }

    free(array);
    
    return (array);
}