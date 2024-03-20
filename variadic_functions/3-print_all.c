#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything based on format specifier
* @format: a list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
    va_list args;
    char c;
    int i = 0;
    float f;
    char *s;
    

    va_start(args, format);

    while (format != NULL && format[i])
    {
      while (format[i] < 4)
      {
        if (format != '\0')
      }
        i++;
    }

    va_end(args);
    printf("\n");
}