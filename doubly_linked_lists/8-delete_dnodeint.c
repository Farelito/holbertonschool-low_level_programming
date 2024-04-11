#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 *index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int i;

	current = *head;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = current->next;

				if (current->next != NULL)
					current->next->prev = temp;
			}

			free(current);
			return (1);
		}
		temp = current;
		current = current->next;
		i++;
	}

	return (-1);
}
