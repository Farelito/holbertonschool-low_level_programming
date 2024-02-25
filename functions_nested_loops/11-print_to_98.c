#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The number to start printing from
* Return: Always 0.
*/
void print_to_98(int n)
{
int count;
	if (n <= 98)
	{
		for (count = n ; count <= 98 ; count++)
		{
			if (count == 98)
			{
				printf("%d", count);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", count);
			}
		}
	}
	else
	{
		for (count = n ; count >= 98 ; count--)
		{
			if (count == 98)
			{
				printf("%d", count);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", count);
			}
		}
	}
}
