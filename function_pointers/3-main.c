#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - main function
* @argc: argument count
* @argv: string of arguments in array
* Return: 0
*/
int main(int argc, char *argv[])
{
   int num1, num3, result;
    int (*op_func)(int, int);

    if (argc !=  4)
    {
       return (98);
    }

     num1 = atoi(argv[1]);
     num3 = atoi(argv[3]);

    if (argv[2][0] != '+' && argv[2][0] != '-' &&
       argv[2][0] != '*' && argv[2][0] != '/' && 
       argv[2][0] != '%')
    {
        printf("Error\n");
         exit (98);
    }
    op_func = get_op_func(argv[2]);
    result = op_func(num1, num3);
    printf("%d\n", result);
    return (0);
}