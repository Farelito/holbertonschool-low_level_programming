#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
    
      if (s == NULL || accept == NULL) 
    {
        fprintf(stderr, "Null pointer detected\n");
        return(0);
    }

    while (*s != '\0')
    {
        const char *a = accept;
        while (*a != '\0'){
            if ( *s == *a)
            {
                return s;
            }
            a++;
        }
        s++;
    }
    return NULL;
}