#include "main.h"
#include <stdio.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept){

    unsigned int count = 0;
      if (s == NULL && accept == NULL) 
    {
        fprintf(stderr, "Null pointer detected\n");
        return(0);
    }
    
    while (*s != '\0' && strchr(accept, *s) != NULL)
    {
       count++;
        s++;
    }
    return (count);

}
