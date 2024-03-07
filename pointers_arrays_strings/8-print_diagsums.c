#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_diagsums - Prints the sum of the diagonals of a square matrix.
*@a: Pointer to the start of a square matrix.
*@size: Size of the square matrix.
*This function calculates and prints the sum of the two diagonals
*of a square matrix specified by the pointer 'a' and the size 'size'.
*/
void print_diagsums(int *a, int size)
{
int i, j, dgnl1, dgnl2;
if (a == NULL || size <= 0)
{
fprintf(stderr, "Null pointer detected\n");
return;
}
dgnl1 = 0;
for (i = 0; i < size; i++)
{
dgnl1 += *(a + i * size + i);
}
dgnl2 = 0;
for (j = 0; j < size ; j++)
{
dgnl2 += *(a + j * size + (size - 1 - j));
}
printf("%d, %d\n", dgnl1, dgnl2);
}
