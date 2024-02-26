#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints Fizz for multiples of 3,
 * Buzz for multiples of 5, and FizzBuzz for multiples of both 3 and 5,
 * otherwise prints the number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (num % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", num);
	}
	}
	printf("\n");

	return (0);

}
