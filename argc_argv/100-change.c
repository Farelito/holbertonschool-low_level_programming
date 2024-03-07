#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;
	int total;
	int coins1, coins10, coins2, coins25, coins5;
	int tot10, tot2, tot25, tot5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	coins25 = cents / 25;
	tot25 = cents % 25;
	coins10 = tot25 / 10;
	tot10 = tot25 %  10;
	coins5 = tot10 / 5;
	tot5 = tot10 %  5;
	coins2 = tot5 / 2;
	tot2 = tot5 %  2;
	coins1 = tot2;
	total = coins25 + coins10 + coins5 + coins2 + coins1;
	printf("%d\n", total);

	return (0);
}
