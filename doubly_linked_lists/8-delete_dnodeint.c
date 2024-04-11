#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of 
 a doubly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: 1 if the node at the given index was successfully 
 * deleted, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (current != NULL && i  < index)
	{
		current = current->next;
		i++;
	}


	if (i != index)
	return (-1);


	if (index == 0)
		*head = current->next;


	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;


	free(current);
	return (1);

}