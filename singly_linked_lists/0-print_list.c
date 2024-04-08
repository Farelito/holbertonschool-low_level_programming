#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: A pointer to the head of the linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
