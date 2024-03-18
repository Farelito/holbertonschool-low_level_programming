#include <stddef.h>

/**
* array_iterator - Executes a given action on each element of an array
* @array: Pointer to the array
* @size: Size of the array
* @action: Pointer to the function to be called on each element
*
* Description: This function iterates over each element of the array and
* calls the given action function on each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

