#include "main.h"
#include <stdio.h>

/**
*main - Entry point of the program
*@argc: Number of command-line arguments
*@argv: Array of command-line argument strings
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);

return (0);
}
