#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given 
 *   position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to store in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    for (i = 0; i < idx - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->prev = temp;
    new_node->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = new_node;
    temp->next = new_node;

    return (new_node);
}
