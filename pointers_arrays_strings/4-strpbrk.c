#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
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
