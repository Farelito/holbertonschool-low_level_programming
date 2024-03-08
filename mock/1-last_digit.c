#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
    n = RAND_MAX % 10;
	/* your code goes there */

    if (n > 5)
    {
        printf("last digit of %d is %d and is greater than 5\n", RAND_MAX, n);
    }
    else if (n == 0)
    {
         printf("last digit of %d is %d and is 0\n", RAND_MAX, n);
    }
    else if ( n < 6)
    {
        printf("last digit of %d is %d and is less than 6 and not 0\n", RAND_MAX, n);
    }
printf("\n");
	return (0);
}