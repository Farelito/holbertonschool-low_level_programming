#include <stddef.h>
void (*get_op_func(char *op))(void) {
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
}
int (*get_op_func(char *s))(int, int)
{
    if (s == NULL)
    {
         return (NULL);
    }
    return (0);
}