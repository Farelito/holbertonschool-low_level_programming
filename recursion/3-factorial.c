#include "main.h"

/**
* factorial - Calculates the factorial of a number using recursion.
* @n: The number for which the factorial is to be calculated.
* This function recursively calculates the factorial of the number 'n'.
* Return: Factorial of the number, or -1 if 'n' is negative.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
