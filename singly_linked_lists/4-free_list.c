#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *current;

   while (head)
   {
     current = head->next;
    head = head->str;
    free(current->str);
    free(current);
    head = current;
   }
}
