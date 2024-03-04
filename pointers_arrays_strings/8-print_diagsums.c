#include "main.h"
#include <stdio.h>
#include <string.h>

void print_diagsums(int *a, int size)
{
    int i, j, dgnl1, dgnl2;
      if (a == NULL || size <= 0) 
    {
        fprintf(stderr, "Null pointer detected\n");
        return;
    }
    /* first diagonal sums */ 
    dgnl1 = 0;
     for (i = 0; i < size; i++ )
    {
    dgnl1 += *(a + i * size + i);
    }
    /* second diagonal sums*/
    dgnl2 = 0; 
    for (j = 0; j < size ; j++)
    {
       dgnl2 += *(a + j * size + (size - 1 - j));
  } 

   printf("%d, %d\n", dgnl1, dgnl2);
}
