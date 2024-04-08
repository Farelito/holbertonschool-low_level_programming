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
unsigned int size;

while (str[size])
{
    size++;
}
new_node = malloc(sizeof(list_t));
if (!new_node) 
{
    free(new_node);
    return (NULL); 
}
new_node->str = strdup(str);
if (new_node->str == NULL) 
{
    free(new_node);
    return (NULL); 
}
new_node->len = size;
new_node->next = (*head);
(*head) = new_node;
return (new_node);
}
