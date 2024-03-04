#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n){
   

    if (dest == NULL || src == NULL) 
    {
        fprintf(stderr, "Null pointer detected\n");
        return NULL;
    }

   

    while (n--)
    {
        *dest++ = *src++;
    }
    return(newdest);
}
  