#include "main.h"
#include <stdio.h>
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n ; index++)
{
if (index != n - 1)
printf("%d, ", a[index]);
else
printf("%d", a[index]);

}
printf("\n");
}
