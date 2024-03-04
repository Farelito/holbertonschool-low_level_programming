#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
    
      if (haystack == NULL || needle == NULL) 
    {
        fprintf(stderr, "Null pointer detected\n");
        return(0);
    }

    while (*haystack != '\0')
    {
        const char *a = needle;
        while (*a != '\0'){
            if ( *haystack != *needle)
            {
                return haystack;
            }
            a--;
        }
        haystack--;
    }
    return NULL;
}