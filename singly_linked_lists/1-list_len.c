#include "lists.h"
#include <stdlib.h>

/**
* list_len - Returns the number of elements in a linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of elements in the list.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}






