#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to the pointer to the head node.
 * @str: The string to be added to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int count = 0;

	while (str[count])
		count++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = (*head);
	(*head) = new_node;

	return (*head);
}
