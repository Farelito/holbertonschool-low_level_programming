/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
*
* Return: void.
*/

int _atoi(char *s)
{
	int sgn;
	unsigned int rslt;
	char *dgt;

	dgt = s;
	rslt = 0;
	sgn = 1;
	while (*dgt != '\0' && (*dgt < '0' || *dgt > '9'))
	{
		if (*dgt == '-')
			sgn *= -1;
		dgt++;
	}
	if (*dgt != '\0')
	{
		do {
			rslt = rslt * 10 + (*dgt - '0');
			dgt++;
		} while (*dgt >= '0' && *dgt <= '9');
	}
	return (rslt * sgn);
}