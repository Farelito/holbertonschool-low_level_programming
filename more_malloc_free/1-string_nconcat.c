#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;

    if (n == strlen(s2))
        n = strlen(s2);
     
    array = (char *)malloc(strlen(s1) + n + 1);

	if (array == NULL)
		return (NULL);
   
        if (s1 != NULL) 
        strcpy(array, s1);

         if (n > 0 && s2 != NULL) 
                strncat(array, s2, n);

	return (array);

}