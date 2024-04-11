#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end_node;

/*Allocate memory for the new node*/
end_node = malloc(sizeof(dlistint_t));

if (end_node == NULL)
return (NULL);

/*Set the value of the new node*/
end_node->n = n;
end_node->prev = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = end_node;
}
else
{
/*Traverse the list to reach the last node*/
dlistint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
/* Add the new node at the end of the list */
current->next = end_node;
end_node->prev = current;
}

return (end_node);
}
