#include <stddef.h>
#include "3-get_op_func.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    int num1, num2, num3, fnct;

    num1 = atoi(arv[1]);
    num2 = atoi(arv[2]);
    num3 = atoi(arv[3]);

    fnct = get_op_func();

    if (fnct != NULL)
    {
        printf("Error\n");
    }

    if (argv[i] == 42)
    {
        return (fnct);
    }

    if (argv[i] == 52 && argv[i] == 57)
    {
         printf("Error\n");
    }
}