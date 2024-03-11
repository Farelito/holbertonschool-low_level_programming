#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
            return NULL;
        }
        strcpy(array, str);
            
              
    return (array);    
}