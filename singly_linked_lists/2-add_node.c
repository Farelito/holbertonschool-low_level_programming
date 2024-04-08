#include "lists.h"

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
    char *duplicate;

    new_node = malloc(sizeof(list_t));

     if (new_node == NULL) 
    {
        return (NULL); 
    }

    duplicate = strdup(str);

    if (duplicate == NULL) 
    {
        free(duplicate); 
        return (NULL); 
    }

    new_node->str = duplicate;
    new_node->len = strlen(str);
    new_node->next = *head;

    *head = new_node;
  
    return (new_node);
}
