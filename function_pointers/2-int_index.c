#include <stddef.h>

/**
*int_index - Searches for an integer in an array using a comparison function
*@array: Pointer to the array to be searched
*@size: Number of elements in the array
*@cmp: Pointer to the comparison function
*Description: This function searches for an integer in the given array using
*the provided comparison function. It returns the index of the first occurrence
*of the integer that matches the comparison function. If no match is found,
*it returns -1.
*Return: Index of the first occurrence of the integer that matches the
*comparison function, or -1 if no match is found or if the array is NULL
*or size is non-positive.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    if (array == NULL && size <=0)
    {
        return (-1);
    }
       
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}