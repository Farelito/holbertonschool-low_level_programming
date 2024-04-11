#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees each node in a
 * doubly linked list,
 * starting from the head, by traversing the list
 * and freeing each node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		if (head != NULL)
		head->prev = NULL;

		free(current);
	}
}
