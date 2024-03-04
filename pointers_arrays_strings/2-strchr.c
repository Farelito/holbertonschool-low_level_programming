#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{

    if (s == NULL)
	{
		fprintf(stderr, "Null pointer detected\n");
		return (NULL);
	}

    while (*s != '\0')
    {
        if (*s == c)
        {
            return (char*)s;
        }
        s++;
    }
    return(NULL);
}