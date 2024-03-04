#include "main.h"
#include <stdio.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{

	if (s == NULL)
	{
		fprintf(stderr, "Null pointer detected\n");
		return (NULL);
	}
		memset(s, b, n);
	return (s);

}
