#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - Multiply two numbers passed as command-line arguments
*@argc: Number of command-line arguments
*@argv: Array of command-line argument strings
*Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int i;
unsigned int j;
char *e;
int sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];
for (j = 0; j < strlen(e); j++)
{
if (!(e[j] >= 48 && e[j] <= 57)) 
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
return (0);
}
return (0);
}
