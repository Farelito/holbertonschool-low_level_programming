#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to return, starting from 0.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;

	while  (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
