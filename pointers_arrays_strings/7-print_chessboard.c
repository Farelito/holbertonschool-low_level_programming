#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_chessboard - Prints the characters of a chessboard.
* @a: The chessboard represented as a 2D array.
* This function prints the characters of a chessboard specified
* by the 2D array 'a'.
*/
void print_chessboard(char (*a)[8])
{
int i, j;
if (a == NULL)
{
fprintf(stderr, "Null pointer detected\n");
return;
}
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}

}
