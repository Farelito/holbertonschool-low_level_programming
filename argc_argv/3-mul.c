#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
int number1 = 0, number2 = 0;
if (argc == 3)
{
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
printf("%d\n", number1 *number2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
