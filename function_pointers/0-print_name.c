#include <stddef.h>

/**
*print_name - print name from a function pointer
*@name: char string
*@f: function pointer take string parmeters
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}