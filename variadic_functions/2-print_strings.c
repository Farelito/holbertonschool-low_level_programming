#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - ...
*@separator: ...
*@n: ...
*
*Return: ...
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}





