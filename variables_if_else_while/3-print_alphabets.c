#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char lttr;

	for (lttr = 'a'; lttr <= 'z'; lttr++)
	{
		putchar(lttr);
	}
	for (lttr = 'A' ; lttr <= 'Z' ; lttr++)
	{
		putchar(lttr);
	}

	putchar('\n');

	return (0);

}
