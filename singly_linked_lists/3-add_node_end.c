#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the pointer to the head node.
 * @str: The string to be added to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
   list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
