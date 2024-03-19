#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++) 
    {
        printf("%s", va_arg(args, char *));

        if (separator != NULL && i != n - 1) {
            printf("%s", separator);
        }
     }

    printf("\n");

    va_end(args);
}
