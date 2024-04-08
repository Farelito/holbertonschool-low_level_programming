#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *current;
   while (head != NULL)
   {
     current = head;
    head = head->next;
    free(current->str);
    free(current);
   }
}

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while(h)
    { 
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
