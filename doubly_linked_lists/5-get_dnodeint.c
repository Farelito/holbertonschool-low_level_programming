#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, 
 * or NULL if not found.
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
    /* for (i = 0; i < index && head != NULL; i++)
    {
        head = head->next;
    }*/

    return (head);
}
