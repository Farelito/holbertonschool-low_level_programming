#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @nmbr: the int to check
 * Return: the absolute value of int
 */

int _abs(int nmbr)
{
	if (nmbr < 0)
	{
		int abs_val;

		abs_val = nmbr * -1;
		return (abs_val);
	}
	return (nmbr);
}
