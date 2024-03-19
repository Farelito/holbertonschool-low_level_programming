#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;

    if (separator == NULL)
   {
    return;
   }

    va_start(args, n);

       for (i = 0; i < n; i++)
  {
     printf("%c", va_arg(args, int));
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
  }
    
   printf("\n");

    va_end(args);
}