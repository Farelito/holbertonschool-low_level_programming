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
    int i = 0:
    float f;
    char *s;
    int n = 1;

    va_start(args, format);

    while (format && format)
    {
        switch (format)
    }
    printf("\n");
    va_end(args);
}