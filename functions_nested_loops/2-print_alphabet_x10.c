#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	int count;
	char alph;

	count =0;

	while (count < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
		putchar('\n');
			count++;
	}

}
