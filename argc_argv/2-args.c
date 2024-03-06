#include "main.h"
#include <stdio.h>

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
* Return: Always 0 (success)
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}

