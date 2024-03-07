#include "main.h"

/**
* is_prime_number - checks if a number is prime recursively
* @n: the number to check
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0 && n > 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number(n - 2) || is_prime_number(n - 1));
}
