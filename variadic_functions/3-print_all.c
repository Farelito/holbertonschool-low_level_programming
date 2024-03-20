#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    va_list args;
    char *str;
    int integer;
    float f;
    int i = 0;
    int printed = 0;

    va_start(args, format);

    while (format && format[i]) {
        if (format[i] == 'c') {
            char c = (char)va_arg(args, int);
            printf("%s%c", printed ? ", " : "", c);
            printed = 1;
        }
        else if (format[i] == 'i') {
            integer = va_arg(args, int);
            printf("%s%d", printed ? ", " : "", integer);
            printed = 1;
        }
        else if (format[i] == 'f') {
            f = (float)va_arg(args, double);
            printf("%s%f", printed ? ", " : "", f);
            printed = 1;
        }
        else if (format[i] == 's') {
            str = va_arg(args, char *);
            if (str == NULL)
                printf("%s(nil)", printed ? ", " : "");
            else
                printf("%s%s", printed ? ", " : "", str);
            printed = 1;
        }
        i++;
    }

    printf("\n");

    va_end(args);
}
