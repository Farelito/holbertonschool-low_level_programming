#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - ...
*@separator: ...
*@n: ...
*
*Return: ...
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}


